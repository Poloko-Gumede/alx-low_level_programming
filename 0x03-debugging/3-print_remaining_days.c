#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int days_left = 0;
int i;

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
days_in_month[1] = 29;
}

if (month >= 2)
{
for (i = 0; i < month - 1; i++)
{
days_left += days_in_month[i];
}
days_left += day;
}
else
{
days_left = day;
}

printf("Day of the year: %d\n", days_left);

if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
{
printf("Remaining days: %d\n", 366 - days_left);
}
else
{
printf("Remaining days: %d\n", 365 - days_left);
}
}

