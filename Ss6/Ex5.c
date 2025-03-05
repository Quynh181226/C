#include <stdio.h>

int main()
{
    int year, month;
    in Day_of_the_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    printf("Input year: ");
    scanf("%d", &year);
    printf("Input month: ");
    scanf("%d", &month);

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        Day_of_the_month[1] = 29;
    }

    if (month >= 1 && month <= 12)
    {
        printf( month %d year %d have %d day.\n", month, year, Day_of_the_month - 1]);
    }
    else
    {
        printf( Invalid month .\n");
    }

    return 0;
}