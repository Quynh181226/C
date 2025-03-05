// Bai 13 : Nhập vào ngày sinh và tháng sinh, in ra cung hoàng đạo biết
#include <stdio.h>

int main()
{
    int day, month;

    printf("Input date of birth (day/month): ");
    scanf("%d/%d", &day, &month);

    if (month < 1 || month > 12)
    {
        printf("Invalid month\n");
        return 1;
    }

    int Day_of_the_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (day < 1 || day > Day_of_the_month[month])
    {
        printf("Invalid day\n");
        return 1;
    }

    switch (month)
    {
    case 1:
        printf(day <= 19 ? "Cung Ma Kết\n" : "Cung Bảo Bình\n");
        break;
    case 2:
        printf(day <= 18 ? "Cung Bảo Bình\n" : "Cung Song Ngư\n");
        break;
    case 3:
        printf(day <= 20 ? "Cung Song Ngư\n" : "Cung Bạch Dương\n");
        break;
    case 4:
        printf(day <= 19 ? "Cung Bạch Dương\n" : "Cung Kim Ngưu\n");
        break;
    case 5:
        printf(day <= 20 ? "Cung Kim Ngưu\n" : "Cung Song Tử\n");
        break;
    case 6:
        printf(day <= 21 ? "Cung Song Tử\n" : "Cung Cự Giải\n");
        break;
    case 7:
        printf(day <= 22 ? "Cung Cự Giải\n" : "Cung Sư Tử\n");
        break;
    case 8:
        printf(day <= 22 ? "Cung Sư Tử\n" : "Cung Xử Nữ\n");
        break;
    case 9:
        printf(day <= 22 ? "Cung Xử Nữ\n" : "Cung Thiên Bình\n");
        break;
    case 10:
        printf(day <= 22 ? "Cung Thiên Bình\n" : "Cung Thiên Yết\n");
        break;
    case 11:
        printf(day <= 21 ? "Cung Thiên Yết\n" : "Cung Nhân Mã\n");
        break;
    case 12:
        printf(day <= 21 ? "Cung Nhân Mã\n" : "Cung Ma Kết\n");
        break;
    }

    return 0;
}