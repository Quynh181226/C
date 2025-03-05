/* Bai 5 : Khai bao va gan gia tri cho mang so nguyen co 5 phan tu ,
 in ra phan tu lon nhat va phan tu nho nhat trong mang da khai bao */
#include <stdio.h>

int main()
{
    int numbers[5];
    printf("Input 5 integer:\n");

    int i = 0;
    while (i < 5)
    {
        scanf("%d", &numbers[i]);
        i++;
    }

    int max = numbers[0], min = numbers[0];
    i = 1;
    while (i < 5)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
        i++;
    }

    printf("Element max: %d\n", max);
    printf("Element min: %d\n", min);

    return 0;
}