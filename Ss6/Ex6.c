#include <stdio.h>

int main()
{
    for (int i = 1; i <= 100; i++)
    {
        int Value = 0;

        if (i % 3 == 0)
        {
            Value += 1;
        }

        if (i % 5 == 0)
        {
            Value += 2;
        }

        switch (Value)
        {
        case 0:
            printf("%d\n", i);
            break;
        case 1:
            printf("Fizz\n");
            break;
        case 2:
            printf("Buzz\n");
            break;
        case 3:
            printf("FizzBuzz\n");
            break;
        }
    }
    return 0;
}