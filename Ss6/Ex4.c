#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);

    if (a == 0)
    {
        printf("This is not a quadratic equation!!!\n");
        return 1;
    }

    delta = b * b - 4 * a * c;

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("The equation has two distinct solutions.: x1 = %.2f, x2 = %.2f\n", x1, x2);
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("The equation has two double solutions.: x1 = x2 = %.2f\n", x1);
    }
    else
    {
        printf("The equation with no solution..\n");
    }

    return 0;
}