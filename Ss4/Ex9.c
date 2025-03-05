
#include <stdio.h>

int main()
{
    int day, month, year;
    printf("Moi ban nhap vao ngay thang nam (dd/mm/yyyy) :\n");
    scanf("%d/%d/%d", &day, &month, &year);

    int Leap_year = (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0);

    int Day_of_the_month = (month == 2) ? (Leap_year ? 29 : 28) : ((month == 4 || month == 6 || month == 9 || month == 11) ? 30 : ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) ? 31 : 0));

    if (month < 1 || month > 12 || day < 1 || day > Day_of_the_month)
    {
        printf("Ngay %02d thang %02d nam %04d nhap vao khong hop le !!\n", day, month, year);
    }
    else
    {
        printf("Ngay %02d thang %02d nam %04d nhap vao hop le ^ ^\n", day, month, year);
    }
    return 0;
}
