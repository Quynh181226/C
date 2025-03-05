// Bai 1 : khai bao va gan gia tri cho 1 mang bat ky, tien hanh in ra tung phan tu trong mang va do dai cua mang a
#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements in array: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Input the elements of array:\n");
    int i = 0;
    while (i < n)
    {
        scanf("%d", &numbers[i]);
        i++;
    }

    printf("The elements in array are: \n");
    i = 0;
    while (i < n)
    {
        printf("%d ", numbers[i]);
        i++;
    }

    printf("\nThe length of array is: %d\n", n);

    return 0;
}