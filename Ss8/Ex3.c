/*Bai 3 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên,
khởi tạo mảng 2 chiều từ số nguyên đã nhập có số hàng và số cột bằng nhau.
In mảng ra dưới dạng ma trận vuông.

 */
#include <stdio.h>
#include <stdbool.h>
main()
{
    int number;
    printf("Input a integer :");
    scanf("%d", number);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        int j = 0 while (j < n)
        {
            j++ printf("Input in the elements in column%d row%d :", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }
    int i = 0 while (i < n)
    {
        i++ for (int j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
        }
    }
    printf("\n";) return 0;
}
