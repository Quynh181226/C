/* Bai 4 : Kết hợp kiến thức từ các bài trước, xây dựng chương trình hiển thị và thực hiện các chức năng theo menu sau:
    MENU
Nhập vào mảng
Hiển thị mảng
Thêm phần tử
Sửa phần tử
Xóa phần tử
Thoát
  Lựa chọn của bạn:
Sau khi nhập lựa chọn chương trình sẽ thực hiện chức năng tương ứng, sau khi thực hiện chức năng menu sẽ lại hiện lên. Chương trình sẽ lặp lại liên tục cho đến khi người dùng chọn thoát.*/

#include <stdio.h>

int main()
{
    int arr[100], currentLength = 0, choice, index, value;

    do
    {
        printf("\nMENU\n1. Input array\n2. Display array\n3. Add\n4. Edit\n5. Delete\n6. Exit\nChoice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Input the number of elements: ");
            scanf("%d", &currentLength);
            for (int i = 0; i < currentLength; i++)
            {
                printf("Element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            if (currentLength == 0)
            {
                printf("Array is empty.\n");
            }
            else
            {
                for (int i = 0; i < currentLength; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            break;

        case 3:
            if (currentLength < 100)
            {
                printf("Input the value to add: ");
                scanf("%d", &value);
                printf("Input the position to add (0-%d): ", currentLength);
                scanf("%d", &index);
                if (index < 0 || index > currentLength)
                {
                    printf("Invalid position!!!\n");
                }
                else
                {
                    for (int i = currentLength; i > index; i--)
                    {
                        arr[i] = arr[i - 1];
                    }
                    arr[index] = value;
                    currentLength++;
                }
            }
            else
            {
                printf("Array is full ^ ^\n");
            }
            break;

        case 4:
            printf("Input index (0-%d): ", currentLength - 1);
            scanf("%d", &index);
            if (index >= 0 && index < currentLength)
            {
                printf("Input new value: ");
                scanf("%d", &value);
                arr[index] = value;
            }
            else
            {
                printf("Invalid index!!!\n");
            }
            break;

        case 5:
            printf("Input index (0-%d): ", currentLength - 1);
            scanf("%d", &index);
            if (index >= 0 && index < currentLength)
            {
                for (int i = index; i < currentLength - 1; i++)
                {
                    arr[i] = arr[i + 1];
                }
                currentLength--;
            }
            else
            {
                printf("Invalid index!!!\n");
            }
            break;

        case 6:
            printf("Exiting the program.\n");
            break;

        default:
            printf("Invalid choice ^ ^\n");
        }
    } while (choice != 6);

    return 0;
}