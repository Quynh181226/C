// Bai tap 10 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ, in ra tất cả các chữ số trong số đã nhập

#include <stdio.h>

int main()
{
    int n;

    printf("Input integer: ");
    scanf("%d", &n);

    if (n < 0)
        n = -n;
    printf("Digits in the Entered number: ");
    while (n > 0)
    {
        printf("%d ", n % 10);
        n /= 10;
    }

    printf("\n");
    return 0;
}
