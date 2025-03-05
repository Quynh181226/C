#include <stdio.h>
int main()
{
    int year;
    printf("Nhap vao so nam : \n");
    scanf("%d", &year);
    if (year % 4 == 0 || year % 100 != 0 && year % 400 == 0)
    {
        printf("Nam %d is a Leap Year", year);
    }
    else
    {
        printf("Nam %d not a Leap Year", year);
    }
    return 0;
}