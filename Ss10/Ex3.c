/*Bai 3 : Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
hãy sử dụng thuật toán sắp xếp chèn (insertion sort)
 để sắp xếp lại mảng theo thứ tự tăng dần.*/
#include <stdio.h>

int main()
{
    int arr[] = {1, 8, 2, 6};
    int n = sizeof(arr) / sizeof(int);

    printf("Initial array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 1; i < n; i++)
    {
        int index = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > index)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = index;
    }

    printf("Sorted array: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}