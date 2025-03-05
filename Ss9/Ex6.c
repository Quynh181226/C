/*Bai 6 : Xây dựng chương trình hiển thị và thực hiện các chức năng theo menu sau:
    MENU
Nhập kích cỡ và giá trị các phần tử của mảng
In giá trị các phần tử của mảng theo ma trận
In giá trị các phần tử là lẻ và tính tổng
In ra các phần tử nằm trên đường biên và tính tích
In ra các phần tử nằm trên đường chéo chính
In ra các phần tử nằm trên đường chéo phụ
In ra dòng có tổng giá trị các phần tử là lớn nhất
Thoát
  Lựa chọn của bạn:
Sau khi nhập lựa chọn chương trình sẽ thực hiện chức năng tương ứng,
sau khi thực hiện chức năng menu sẽ lại hiện lên.
Chương trình sẽ lặp lại liên tục cho đến khi người dùng chọn thoát.*/

#include <stdio.h>

int main()
{
    int arr[100][100];
    int rows, cols, choice;

    while (1)
    {
        printf("Menu\n");
        printf("1. Input the size and values of the matrix elements\n");
        printf("2. Print the values of the matrix elements in matrix format\n");
        printf("3. Print odd values and calculate the sum\n");
        printf("4. Print the boundary elements and calculate the h\n");
        printf("5. Print the main diagonal elements\n");
        printf("6. Print the secondary diagonal elements\n");
        printf("7. Print the row with the largest sum of elements\n");
        printf("8. Exit\n");
        printf("Input your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Input number of rows: ");
            scanf("%d", &rows);
            printf("Input number of columns: ");
            scanf("%d", &cols);
            if (rows <= 0 || rows > 100 || cols <= 0 || cols > 100)
            {
                printf("Invalid matrix size.\n");
                break;
            }
            for (int i = 0; i < rows; ++i)
            {
                for (int j = 0; j < cols; ++j)
                {
                    printf("Input value for arr[%d][%d]: ", i + 1, j + 1);
                    scanf("%d", &arr[i][j]);
                }
            }
            break;

        case 2:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix is empty.\n");
                break;
            }
            printf("Current matrix:\n");
            for (int i = 0; i < rows; ++i)
            {
                for (int j = 0; j < cols; ++j)
                {
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix is empty.\n");
                break;
            }
            int sum = 0;
            printf("Odd elements in the matrix:\n");
            for (int i = 0; i < rows; ++i)
            {
                for (int j = 0; j < cols; ++j)
                {
                    if (arr[i][j] % 2 != 0)
                    {
                        printf("%d ", arr[i][j]);
                        sum += arr[i][j];
                    }
                }
            }
            printf("\nSum of odd numbers: %d\n", sum);
            break;

        case 4:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix is empty.\n");
                break;
            }
            int h = 1;
            printf("Boundary elements of the matrix:\n");
            for (int i = 0; i < rows; ++i)
            {
                for (int j = 0; j < cols; ++j)
                {
                    if (i == 0 || j == 0 || i == rows - 1 || j == cols - 1)
                    {
                        printf("%d ", arr[i][j]);
                        h *= arr[i][j];
                    }
                }
            }
            printf("\nh of boundary elements: %d\n", h);
            break;

        case 5:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix is empty.\n");
                break;
            }
            printf("Main diagonal elements:\n");
            for (int i = 0; i < rows; ++i)
            {
                printf("%d ", arr[i][i]);
            }
            break;

        case 6:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix is empty.\n");
                break;
            }
            printf("Secondary diagonal elements:\n");
            for (int i = 0; i < rows; ++i)
            {
                printf("%d ", arr[i][cols - i - 1]);
            }
            break;

        case 7:
            if (rows == 0 || cols == 0)
            {
                printf("Matrix is empty.\n");
                break;
            }
            int maxRowSum = -1, rowindex = -1;
            for (int i = 0; i < rows; ++i)
            {
                int rowSum = 0;
                for (int j = 0; j < cols; ++j)
                {
                    rowSum += arr[i][j];
                }
                if (rowSum > maxRowSum)
                {
                    maxRowSum = rowSum;
                    rowindex = i;
                }
            }
            printf("The row with the largest sum is row %d: ", rowindex + 1);
            for (int j = 0; j < cols; ++j)
            {
                printf("%d ", arr[rowindex][j]);
            }
            break;

        case 8:
            printf("Exiting the program.\n");
            return 0;

        default:
            printf("Invalid choice.\n");
        }
    }

    return 0;
}