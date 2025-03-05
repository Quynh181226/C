/*Bai 2 : Khai báo và gán giá trị cho một mảng bất k,yêu cầu người dùng nhập vào vị trí cần sửa và giá trị mới sau khi sửa. Tiến hành ghi đè giá trị cũ trong mảng tại vị trí cần sửa bằng giá trị mới.Sau khi sửa thì in mảng ra màn hình để kiểm tra*/
#include <stdio.h>

int main()
{
    int arr[100], n, index, value;
    printf("Input the number of elements in the array: ");
    scanf("%d", &n);
    printf("Input the elements of the array:\n");

    for (int i = 0; i < n; i++)
    {
        printf("Element %d: ", i);
        scanf("%d", &arr[i]);
    }

    printf("Input the position to edit (0-%d): ", n - 1);
    scanf("%d", &index);

    if (index >= 0 && index < n)
    {
        printf("Input the new value: ");
        scanf("%d", &value);
        arr[index] = value;
        printf("Array after editing:\n");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    else
    {
        printf("Invalid position!!!\n");
    }

    return 0;
}