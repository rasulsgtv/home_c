#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include "temp_api.h"
#define SIZE 10000




struct sensor info[SIZE];


int main(int argc, char *argv[]) {

    int rez = 0;
    char *filename = NULL; 
    uint8_t month = 0;


    while ((rez = getopt(argc, argv,"hf:m:")) != -1)
    {
        switch (rez)
        {
        case 'h':
            PrintHelp();
            break;
        case 'f':
            filename = optarg;
            break;
        case 'm':
            month = (uint8_t)atoi(optarg);
            break;
        default:
            printf("Temp statistic application. Please enter key -h for info\n");
            break;
        }
    }
    if (argc == 1)
    {
    PrintHelp();
    return 0;
    }
    
    if (filename == NULL)
    {
    printf("No input file specified.\n");
    return 1;
    }

    int count = ReadCSV(filename, info, SIZE);

    if (count <= 0)
    {
    printf("No data loaded.\n");
    return 1;
    }

    if (month != 0)
    {
        printf("%-6s %-8s %-10s %-10s %-10s\n", "Year", "Month","MonthAvg", "MonthMin","MonthMax");
        printf("-------------------------------------------------\n");
        PrintMonthStatistic(info, count, info[0].year, month);
    }
    else
    {
        printf("%-6s %-8s %-10s %-10s %-10s\n", "Year", "Month","MonthAvg", "MonthMin","MonthMax");
        printf("-------------------------------------------------\n");
        for(int i = 1; i <= 12; i++)
        {
            PrintMonthStatistic(info, count,  info[0].year, i);
        }

    PrintAnnualStatistic(info, count, info[0].year);
    
    // вывести статистику по всем месяцам и за год
    }


    return 0;
}



