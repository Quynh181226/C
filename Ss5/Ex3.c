/*Bai 3 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên dương,
tính tổng tất cả các số từ 1 đến số được nhập và in kết quả ra màn hình.*/

#include <stdio.h>

int main()
{
    int n, sum = 0;
    printf("Input a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Invalid ^ ^.\n");
        return 1;
    }

    int i = 1;
    while (i <= n)
    {
        sum += i;
        i++;
    }

    printf("Sum of numbers from 1 to %d is: %d\n", n, sum);
    return 0;
}
