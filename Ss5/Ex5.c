// Bai tap 5 : Viết chương trình in ra tất cả các bảng cửu chương từ 1 đến 9.
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++)
    {
        printf("Multiplication table %d:\n", i);
        for (int j = 1; j <= 10; j++)
        {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
