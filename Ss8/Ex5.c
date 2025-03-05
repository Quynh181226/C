/*Bai 5 :Khai báo và gán giá trị cho một ma trận dưới dạng mảng
hai chiều bất kỳ, tính tổng các phần tử trên đường biên của ma
trận và in kết quả ra màn hình */
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 8, 1},
                   {2, 2, 0},
                   {0, 6, 2}};
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0 || i == 2 || j == 0 || j == 2)
            {
                sum += a[i][j];
            }
        }
    }
    printf("Total elements on the border of the matrix :%d", sum);
    return 0;
}
