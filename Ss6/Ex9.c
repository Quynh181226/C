/*Bai 9 : Viết chương trình in ra các số Armstrong có 3 chữ số
Tổng lập phương của các chữ số của nó bằng chính số đó .*/

#include <stdio.h>

int main()
{
    for (int number = 100; number < 1000; number++)
    {
        int sum = 0, index = number;
        while (index > 0)
        {
            int digit = index % 10;
            sum += digit * digit * digit;
            index /= 10;
        }
        printf("%d ", (sum == number) ? number : 0);
    }
    return 0;
}
