/*Bai 7 : Viết chương trình yêu cầu người dùng nhập vào 2 số nguyên dương bất kỳ,
 viết chương trình tìm ước chung lớn nhất của 2 số đó và in kết quả ra màn hình.*/
#include <stdio.h>

int ƯCLN(int a, int b)
{
    while (b != 0)
    {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
    int a, b;
    printf("Input twos number : ");
    scanf("%d %d", &a, &b);
    printf("ƯCLN của %d và %d là: %d\n", a, b, ƯCLN(a, b));
    return 0;
}