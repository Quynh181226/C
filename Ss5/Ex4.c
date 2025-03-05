/*Bai 4 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên dương từ 1 đến 10,
in ra bảng cửu chương tương ứng với số đã được nhập.*/
#include <stdio.h>

int main()
{
    int number, i = 1;

    printf("Input positive integer from 1-10: ");
    scanf("%d", &number);

    if (number < 1 || number > 10)
    {
        printf("Invalid !!!.\n");
    }
    else
    {
        printf("Multiplication table %d:\n", number);
        do
        {
            printf("%d x %d = %d\n", number, i, number * i);
            i++;
        } while (i <= 10);
    }

    return 0;
}
