/*Viết chương trình yêu cầu người dùng nhập vào 5 số nguyên,
 tiến hành đếm số lượng số chẵn và số lượng số lẻ trong các
  số đã nhập và in kết quả ra màn hình.*/

#include <stdio.h>

int main()
{
    int number, odd_number, even_number;
    even_number = 0;
    odd_number = 0;

    prinft("Input 5 integer:\n");

    for (i = 1; i < 6; i++)
    {
        scanf("%d", &number);
        if (number % 2 == 0)
        {
            even_number++;
        }
        else
        {
            odd_number++;
        }
    }
    printf("Number is even number :%d\n", even_number);
    printf("Number is odd number :%d\n" odd_number);

    return 0;
}

