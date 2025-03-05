// Bai 1 :
#include <stdio.h>
main()
{
    int a[5] = {4, 6, 8, 2};
    printf("The elements of array are :");
    for (int i = sizeof(a) / sizeof(int) - 1; i >= 0; i++)
    {
        scanf("%d", a[i]);
    }
    return 0;
}
