/*Bai 4 :Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
 hãy sử dụng thuật toán sắp xếp chọn (selection sort)
 để sắp xếp lại mảng theo thứ tự tăng dần. */
#include <stdio.h>

int main()
{
    int arr[] = {1, 8, 2, 6};
    int n = sizeof(arr) / sizeof(int);
    int index;

    printf("Array begin : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        index = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[index])
            {
                index = j;
            }
        }
        if (index != i)
        {
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
        }
    }
    printf("Array after in the arrage : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
