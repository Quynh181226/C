/* Bai 3 : Khai báo một mảng có 100 phần tử, yêu cầu người dùng nhập vào số phần tử muốn nhập và nhập từng phần tử vào mảng.
Sau khi đã nhập xong tiến hành thực hiện logic xóa phần tử khỏi mảng. Yêu cầu người dùng nhập vị trí cần xóa và thực hiện xóa phần tử ở vị trí đã nhập.
Gợi ý:
Sau khi nhập số phần tử ban đầu thì cần lưu lại số lượng phần tử hiện có trong mảng. Có thể đặt tên biến là currentLength.
Vị trí muốn xóa cần nằm trong khoảng từ 0 - currentLength, nếu nhập sai thì thông báo không hợp lệ
Khi xóa thì chỉ số của tất cả các phần tử phía sau vị trí cần xóa giảm đi 1 và giảm currentLength đi 1.
Sau khi thêm mới thì in mảng ra màn hình để kiểm tra, khi in mảng thay vì cố định độ dài của mảng ta sẽ chỉ in đến biến currentLength.*/
#include <stdio.h>

int main()
{
    int pos, arr[100];
    int currentLength;

    printf("Input the number of elements: ");
    scanf("%d", &currentLength);

    for (int i = 0; i < currentLength; i++)
    {
        printf("Input element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Initial array: ");

    for (int i = 0; i < currentLength; i++)
    {
        printf("%d ", arr[i]);
    }

    do
    {
        printf("Input the position you want to delete (0-%d): ", currentLength - 1);
        scanf("%d", &pos);
        if (pos < 0 || pos >= currentLength)
        {
            printf("Invalid position^ ^\n");
        }
    } while (pos < 0 || pos >= currentLength);

    for (int i = pos; i < currentLength - 1; i++)
    {
        arr[i] = arr[i + 1];
    }
    currentLength--;
    printf("Array after deletion: ");

    for (int i = 0; i < currentLength; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}