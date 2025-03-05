/*Bai 4 : Khai báo và gán giá trị cho một mảng hai chiều bất kỳ,
 in ra phần tử lớn nhất trong mảng đã khai báo.*/

#include <stdio.h>
main()
{
    int a[3][3] = {{1, 8, 1},
                   {2, 2, 0},
                   {0, 6, 2}};
    int max = a[0][0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (max < a[i][j])
            {
                max = a[i][j];
            }
        }
    }
    printf("The element max in array is : %d", max);
    return 0;
}
