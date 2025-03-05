/*Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên dương bất kỳ,
 viết chương trình tìm bội chung nhỏ nhất của 2 số đó và in kết quả ra màn hình.*/

#include <stdio.h>

int main()
{
    int a, b, index;

    printf("Input two positive integers: ");
    scanf("%d %d", &a, &b);

    index = (a > b) ? a : b;
    while (1)
    {
        if (index % a == 0 && index % b == 0)
        {
            printf("BCNN of %d and %d is: %d\n", a, b, index);
            break;
        }
        index++;
    }

    return 0;
}