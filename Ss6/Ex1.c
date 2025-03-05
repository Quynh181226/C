/* Bai 1 : Viết chương trình yêu cầu người dùng nhập vào 5 số nguyên,
tiến hành tính tổng các số lẻ trong các số đã nhập và in kết quả
 ra màn hình.*/
#include <stdio.h>

int main()
{
    int number, sum;
    sum = 0;

    printf("Input 5 integer\n :");
    for (i = 1; i < 6; i++)
    {
        scanf("%d", &number[i]);
        if (i % 2 != 0)
        {
            sum += number;
        }
    }

    printf("Total integer entered is %d\n :", sum);

    return 0;
}
