/* Bai 5 :Xây dựng chương trình hiển thị và thực hiện các chức năng theo menu sau:
    MENU
Nhập số phần tử cần nhập và giá trị các phần tử
In ra giá trị các phần tử đang quản lý
In ra giá trị các phần tử chẵn và tính tổng
In ra giá trị lớn nhất và nhỏ nhất trong mảng
In ra các phần tử là số nguyên tố trong mảng và tính tổn
Nhập vào một số và thống kê trong mảng có bao nhiêu phần tử đó
Thêm một phần từ vào vị trí chỉ định
Thoát
  Lựa chọn của bạn:
Sau khi nhập lựa chọn chương trình sẽ thực hiện chức năng tương ứng,
sau khi thực hiện chức năng menu sẽ lại hiện lên.
Chương trình sẽ lặp lại liên tục cho đến khi người dùng chọn thoát.*/

#include <stdio.h>
#include <math.h>

int main()
{
    int arr[100], n = 0, menu, pos, value, sum, count;
    int isPrime(int n)
    {
        if (n < 2)
        {
            return 0;
        }
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                return 0;
            }
        }
        return 1;
    }
    while (1)
    {
        printf("\nMENU\n1. Input number of elements\n2. Display array elements\n3. Display even elements\n4. Display max and min values\n5. Prime numbers\n6. Frequency of a number\n7. Add an element\n8. Exit\nYour choice: ");
        scanf("%d", &menu);

        switch (menu)
        {
        case 1:
            printf("Number of elements: ");
            scanf("%d", &n);
            for (int i = 0; i < n; i++)
            {
                printf("Element %d: ", i + 1);
                scanf("%d", &arr[i]);
            }
            break;

        case 2:
            if (n == 0)
            {
                printf("Array is empty\n");
            }
            else
            {
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
            }
            break;

        case 3:
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] % 2 == 0)
                {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nSum of even elements: %d\n", sum);
            break;

        case 4:
            if (n == 0)
                printf("Array is empty\n");
            else
            {
                int max = arr[0], min = arr[0];
                for (int i = 1; i < n; i++)
                {
                    if (arr[i] > max)
                        max = arr[i];
                    if (arr[i] < min)
                        min = arr[i];
                }
                printf("Max value is: %d, Min value is: %d\n", max, min);
            }
            break;

        case 5:
            sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (isPrime(arr[i]))
                {
                    printf("%d ", arr[i]);
                    sum += arr[i];
                }
            }
            printf("\nSum of prime numbers: %d\n", sum);
            break;

        case 6:
            printf("Input value to search: ");
            scanf("%d", &value);
            count = 0;
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == value)
                {
                    count++;
                }
            }
            printf("%d appears %d times\n", value, count);
            break;

        case 7:
            printf("Input position to insert (0-%d): ", n);
            scanf("%d", &pos);
            if (pos < 0 || pos > n)
            {
                printf("Invalid position\n");
            }
            else
            {
                printf("Input value to insert: ");
                scanf("%d", &value);
                for (int i = n; i > pos; i--)
                {
                    arr[i] = arr[i - 1];
                }
                arr[pos] = value;
                n++;
                for (int i = 0; i < n; i++)
                {
                    printf("%d ", arr[i]);
                }
                printf("\n");
            }
            break;

        case 8:
            printf("Exiting program\n");
            return 0;

        default:
            printf("Invalid choice\n");
        }
    }
}