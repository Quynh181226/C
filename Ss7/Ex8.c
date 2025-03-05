/*Bai 8 : viet truong trinh yeu cau nguoi dùng nhap vao so hang va so cot cua 1 mang 2 chieu .
Yeu cau nguoi dung nhap tung phan tu trong mang va in ra man hinh theo ma tran*/

#include <stdio.h>

int main()
{
    int rows, cols;
    printf("Input rows: ");
    scanf("%d", &rows);
    printf("Input cols: ");
    scanf("%d", &cols);

    int num1[rows][cols];

    printf("Input elements of array:\n");

    int i = 0;
    while (i < rows)
    {
        int j = 0;
        while (j < cols)
        {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &num1[i][j]);
            j++;
        }
        i++;
    }
    printf("Array entered:\n");
    i = 0;
    while (i < rows)
    {
        int j = 0;
        while (j < cols)
        {
            printf("%d ", num1[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}