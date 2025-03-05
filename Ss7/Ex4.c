/*Bai 4 :  */
#include <stdio.h>

int main()
{
    int n;
    printf("Input the number of elements in array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Input %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The entered array is:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}