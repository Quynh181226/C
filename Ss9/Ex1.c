/* Bai 1 :Khai báo một mảng có 100 phần tử, yêu cầu người dùng nhập vào số phần tử muốn nhập và nhập từng phần tử vào mảng. Sau khi đã nhập xong tiến hành thực hiện logic thêm phần tử vào mảng. Yêu cầu người dùng nhập giá trị và vị trí muốn thêm vào mảng và thực hiện chèn giá trị đó vào vị trí đã nhập.

Gợi ý:

Sau khi nhập số phần tử ban đầu thì cần lưu lại số lượng phần tử hiện có trong mảng. Có thể đặt tên biến là currentLength.
Vị trí cần thêm cần nằm trong khoảng từ 0 - kích cỡ khởi tạo của mảng, nếu nhập sai thì thông báo không hợp lệ
Khi muốn thêm mới thì kiểm tra xem vị trí cần thêm (addIndex) so với currentLength:
Nếu addIndex >= currentLength: Gán trực tiếp giá trị của phần tử đó thành giá trị muốn thêm và gán currentLength = addIndex.
Nếu addIndex < currentLength: chỉ số của tất cả các phần tử từ vị trí addIndex tăng lên 1 và gán phần tử cần thêm vào vị trí addIndex.
Sau khi thêm mới thì in mảng ra màn hình để kiểm tra, khi in mảng thay vì cố định độ dài của mảng ta sẽ chỉ in đến biến currentLength. */
#include <stdio.h>

int main()
{
    int n;
    int arr[100];
    printf("Input the number of elements: ");
    scanf("%d", &n);

    if (n > 100)
    {
        printf("The number of elements exceeds the limit!!!\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        printf("Input element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int pos, value;
    printf("Input the position to insert: ");
    scanf("%d", &pos);
    pos--;

    if (pos < 0 || pos > n)
    {
        printf("Invalid position!!!\n");
        return 1;
    }

    for (int i = n; i > pos; i--)
    {
        arr[i] = arr[i - 1];
    }

    printf("Input the value to insert: ");
    scanf("%d", &value);
    arr[pos] = value;
    n++;
    printf("Array after inserting the element: ");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}