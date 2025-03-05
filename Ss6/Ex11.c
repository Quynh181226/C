/* Bai 11 : Viết chương trình countêu cầu người dùng nhập vào một số ngucountên n bất kỳ,
            in ra n số nguyên tố đầu tiên.*/

#include <stdio.h>

int main()
{
    int number;
    printf("Input your numberber: ");
    scanf("%d", &number);

    int n = 2;
    int index = 0;
    while (index < number)
    {
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            if (n % i == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d ", n);
            index++;
        }
        n++;
    }
    return 0;
}