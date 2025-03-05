/*Bai 3 : Khai bao va gan gia tri cho mang so nguyen có 5 phan tu, in ra tat ca cac phan tu la so chan trong mang, neu khong co thi in ra mang khong chua so chan */

#include <stdio.h>

int main()
{
    int arr[5];
    int even = 0;
    int i = 0;
    printf("Input 5 elements in array:\n");
    while (i < 5)
    {
        scanf("%d", &arr[i]);
        i++;
    }

    printf("The even numbers of array are : ");
    i = 0;
    while (i < 5)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
            even = 1;
        }
        i++;
    }

    if (!even)
    {
        printf("\nInvalid.\n");
    }

    return 0;
}