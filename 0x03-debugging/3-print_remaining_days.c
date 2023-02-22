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
    int days_in_feb = 28;
    int day_of_year = 0;
    int days_remaining = 0;

    // check if it's a leap year
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        days_in_feb = 29;
    }

    // calculate day of year
    switch (month)
    {
        case 12:
            day_of_year += 30;
        case 11:
            day_of_year += 31;
        case 10:
            day_of_year += 30;
        case 9:
            day_of_year += 31;
        case 8:
            day_of_year += 31;
        case 7:
            day_of_year += 30;
        case 6:
            day_of_year += 31;
        case 5:
            day_of_year += 30;
        case 4:
            day_of_year += 31;
        case 3:
            day_of_year += days_in_feb;
        case 2:
            day_of_year += 31;
        case 1:
            day_of_year += day;
            break;
        default:
            printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
            return;
    }

    // check for invalid date
    if (month < 1 || month > 12 || day < 1 || day > 31 || (month == 2 && day > days_in_feb))
    {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    // calculate remaining days
    days_remaining = 365 + (days_in_feb == 29);
    days_remaining -= day_of_year;

    printf("Day of the year: %d\n", day_of_year);
    printf("Remaining days: %d\n", days_remaining);
}

