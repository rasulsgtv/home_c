#include "temp_api.h"
#include <stdint.h>
#include <stdio.h>
#define N 6

int PrintHelp(void)
{
        printf("Temp statistic application. Please enter key:\n");
        printf("-h for help.\n");
        printf("-f file_name for load this file.\n");
        printf("-m xx fstatistic for xx month.\n");
        return 0;
}

void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t t)
{
    info[number].year = year;
    info[number].month = month;
    info[number].day = day;
    info[number].hour = hour;
    info[number].minute = minute;
    info[number].t = t;
}

/*
void RemoveRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t t)
{
    info[number].year = 0;
    info[number].month = 0;
    info[number].day = 0;
    info[number].hour = 0;
    info[number].minute = 0;
    info[number].t = 0;
}
*/

int ReadCSV(const char *filename, struct sensor * info, int number)
{

    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;

    FILE *fp;

    if ((fp = fopen(filename, "r"))== NULL)
    {
        perror("Error occured while opening input file!");
        return -1; 
    }
    int r;
    int count = 0;
    int line = 0;
    char ch;

    while ((r=fscanf(fp,
       "%hu;%hhu;%hhu;%hhu;%hhu;%hhd",
       &year,
       &month,
       &day,
       &hour,
       &minute,
       &t)) != EOF)
    {
        
        line++;

        if(r != N)
        {
            do
            {
            ch = fgetc(fp);
            } while(ch != '\n' && ch != EOF); 
            printf ("Error in line %d\n", line);
            continue;
        }
        else 
        {
            if (count >= number)
            {
            break;
            } 
            AddRecord(info, count, year, month, day, hour, minute, t);
            count++;
        }    
    }
    fclose(fp);
    return count;
}

// Функция для вычисления средней температуры за месяц
float Average_Monthly_Temperature(struct sensor *info, int number, uint16_t year, uint8_t month)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year &&
            info[i].month == month)
        {
            sum += info[i].t;
            count++;
        }
    }

    if (count == 0)
    {
        return 0.0f;
    }
    return (float)sum / count;
}

int Minimum_Current_Month(struct sensor *info, int number, uint16_t year, uint8_t month)
{
    int min = info[0].t;
    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year &&
            info[i].month == month)
        {
            if (min > info[i].t)
            {
                min = info[i].t;
            }
        }
    }
    return min;
}

int Maximum_Current_Month(struct sensor *info, int number, uint16_t year, uint8_t month)
{
    int max = info[0].t;
    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year &&
            info[i].month == month)
        {
            if (max < info[i].t)
            {
                max = info[i].t;
            }
        }
    }
    return max;
}

float Average_Annual_T(struct sensor *info, int number, uint16_t year)
{
    int sum = 0;
    int count = 0;

    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year)
        {
            sum += info[i].t;
            count++;
        }
    }

    if (count == 0)
    {
        return 0.0f;
    }
    return (float)sum / count;
}

int Minimum_Annual_T(struct sensor *info, int number, uint16_t year)
{
    int min = info[0].t;
    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year)
        {
            if (min > info[i].t)
            {
                min = info[i].t;
            }
        }
    }
    return min;
}

int Maximum_Annual_T(struct sensor *info, int number, uint16_t year)
{
    int max = info[0].t;
    for (int i = 0; i < number; i++)
    {
        if (info[i].year == year)
        {
            if (max < info[i].t)
            {
                max = info[i].t;
            }
        }
    }
    return max;
}



void PrintMonthStatistic(struct sensor *info, int number, uint16_t year, uint8_t month)
{
    float average = Average_Monthly_Temperature(info, number,year, month);
    int min = Minimum_Current_Month(info, number, year, month);
    int max =  Maximum_Current_Month(info, number, year, month);
    /*
    printf("Statistics for %04d-%02d:\n",
               year,
               month
            );
    printf("Average Monthly Temperature = %2f\n", average);
    printf("Minimum Temperature = %d\n", min);
    printf("Maximum Temperature= %d\n", max);
    */
        printf("%-6d %-8d %10.2f %10d %10d\n",
               year,
               month,
               average,
               min,
               max
            );
}

void PrintAnnualStatistic(struct sensor *info, int number, uint16_t year)
{
    float annual = Average_Annual_T(info, number, year);
    int min = Minimum_Annual_T(info, number,year);
    int max = Maximum_Annual_T(info, number, year);

    printf("Statistics for %04d:\n",
               year
            );
    printf("Average Annual Temperature = %2f\n", annual);
    printf("Minimum Temperature = %d\n", min);
    printf("Maximum Temperature= %d\n", max);

}


// Вспомогательные функции для сортировки
/*
void changeIJ(struct sensor* info, int i, int j)
{
    struct sensor temp = info[i];
    info[i] = info[j];
    info[j] = temp;
}
void SortByT(struct sensor* info, int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            if(info[i].t >= info[j].t)
            {
                changeIJ(info, i, j);
            }
        }
    }
}

unsigned int DateToInt(struct sensor* info)
{
    return info->year << 16 | info->month << 8 | info->day;
}

void SortByDate(struct sensor* info, int n)
{
    for(int i = 0; i < n; ++i)
    {
        for(int j = i; j < n; ++j)
        {
            if(DateToInt(info + i) >=
            DateToInt(info + j))
            {
                changeIJ(info, i, j);
            }
        }
    }
}
*/