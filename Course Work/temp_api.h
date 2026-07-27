#include <stdint.h>
#ifndef TEMP_API_H
#define TEMP_API_H

struct sensor {
    uint16_t year;
    uint8_t month;
    uint8_t day;
    uint8_t hour;
    uint8_t minute;
    int8_t t;
};

int PrintHelp(void);
int ReadCSV(const char *filename, struct sensor * info, int number);
void AddRecord(struct sensor *info, int number, uint16_t year, uint8_t month, uint8_t day, uint8_t hour, uint8_t minute, int8_t t);

float Average_Monthly_Temperature(struct sensor *info, int number, uint16_t year, uint8_t month);
int Minimum_Current_Month(struct sensor *info, int number, uint16_t year, uint8_t month);
int Maximum_Current_Month(struct sensor *info, int number, uint16_t year, uint8_t month);

float Average_Annual_T(struct sensor *info, int number, uint16_t year);
int Minimum_Annual_T(struct sensor *info, int number, uint16_t year);
int Maximum_Annual_T(struct sensor *info, int number, uint16_t year);

void PrintMonthStatistic(struct sensor *info, int number, uint16_t year, uint8_t month);
void PrintAnnualStatistic(struct sensor *info, int number, uint16_t year);

#endif
