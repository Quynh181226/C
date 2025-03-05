#include <stdio.h>

int main()
{
    int number, i = 1;

    printf("Input a integer: ");
    scanf("%d", &number);

    while (i <= number)
    {
        if (number % i == 0)
        {
            printf("%d ", i);
        }
        i++;
    }

    return 0;
}
