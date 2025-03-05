/*Bai 2 : khai bao mang so nguyen co 5 phan tu,
 yeu cau nguoi dung nhap lan luot tung phan tu trong mang,
 sau khi nhap xong thi in mang ra man hinh */

#include <stdio.h>

int main()
{
    int arr[5];
    printf("Input 5 integer : \n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The element in array are :\n ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}