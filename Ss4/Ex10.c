// Bai tap 10 : Viết chương trình yêu cầu người dùng nhập vào 3 số nguyên, in các số đó ra màn hình theo thứ tự từ nhỏ đến lớn.
#include <stdio.h>

int main()
{
    int a, b, c, i, temp;

    printf("Enter 3 integer : \n ");
    scanf("%d %d %d", &a, &b, &c);

    for (i = 0; i < 2; i++)
    {
        if (a > b)
        {
            temp = a;
            a = b;
            b = temp;
        }
        if (a > c)
        {
            temp = a;
            a = c;
            c = temp;
        }
        if (b > c)
        {
            temp = b;
            b = c;
            c = temp;
        }
    }

    printf("Thu tu tu nho den lon : %d %d %d\n", a, b, c);
    return 0;
}