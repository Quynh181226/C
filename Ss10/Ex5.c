/*Bai 5 :Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
 hãy sử dụng thuật toán sắp xếp bất kỳ để sắp xếp lại mảng theo
 thứ tự tăng dần. Yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và
 sử dụng thuật toán tìm kiếm nhị phân để tìm vị trí của phần tử đó trong mảng.  */

#include <stdio.h>
int main()
{
    int arr[5] = {1, 8, 2, 6};
    for (int i = 0; i < 5; i++)
    {
        int index = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > index)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = index;
    }
    printf("Array after in the arraged:");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    int b, c = 0;
    printf("\nInput value : ");
    scanf("%d", &b);
    for (int i = 0; i < 5; i++)
    {
        if (b == arr[i])
        {
            c += 1;
            printf("Position :%d \n", i + 1);
        }
    }
    return 0;
}
