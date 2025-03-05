/* Bai 5 : Khai bao va gan gia tri cho mang so nguyen co 5 phan tu,
tien hanh thay doi mang da khai bao, neu la so le thi tang len 2 don vi,
neu la so chan thi tang len 3 don vi . In mang moi sau khi da thay doi
Input
[1, 2,3, 4, 5]
Output
[3, 5, 5, 7, 7] */

#include <stdio.h>

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    int i = 0;

    while (i < 5)
    {
        if (numbers[i] % 2 == 0)
        {
            numbers[i] += 3;
        }
        else
        {
            numbers[i] += 2;
        }
        i++;
    }

    printf("Array after the change:\n[");
    i = 0;
    while (i < 5)
    {
        printf("%d", numbers[i]);
        if (i < 4)
        {
            printf(", ");
        }
        i++;
    }
    printf("]\n");

    return 0;
}