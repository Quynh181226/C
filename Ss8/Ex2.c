/*Bai 2: Khai báo và gán giá trị cho một mảng bất kỳ,
 yêu cầu người dùng nhập vào một phần tử và kiểm tra
 xem phần tử đó có tồn tại trong mảng không.
 Nếu có thì in ra “Vị trí phần tử trong mảng là …”,
 nếu không thì in ra “Phần tử không tồn tại trong mảng.*/
#include <stdio.h>
#include <stdbool.h>
main()
{
    int number;
    printf("Input a element :");
    scanf("%d", number);
    bool index = false;
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == number)
        {
            index = true;
            printf("Position of element in the array is :");
        }
    }
    if (!index)
    {
        printf("Element not exits in the array ^ ^ :");
    }

    return 0;
}
