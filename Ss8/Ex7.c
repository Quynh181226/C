/*Bai 7 : Khai báo và gán giá trị cho một ma trận vuông dưới dạng mảng hai chiều bất kỳ,
 in các phần tử trên đường chéo chính của ma trận và tổng của các phần tử đó ra màn hình */
#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 8, 1},
                   {2, 2, 0},
                   {0, 6, 2}};
    int sum = 0;
    printf("The elements main diagonal are :");
    for (int i = 0; i < 3; i++)
    {
        printf("%d", a[i][i]);
        sum += a[i][j];
    }
    printf("Total elements the main diagonal of matrix :%d", sum);
    return 0;
}
