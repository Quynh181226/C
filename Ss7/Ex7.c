/* Bai 7 : Viet chuong trinh yeu cau nguoi dung nhap so phan tu cua mang,
sau do nhap tung phan tu có trong mang sao cho tat ca cac phan tu duoc nhap phai la so le ,
 neu khong thi yeu cau nhap lai phan tu do  */

#include <stdio.h>

int main()
{
    int n;
    printf("Input the elements of array : ");
    scanf("%d", &n);

    int arr[n];
    int i = 0;
    do
    {
        int x;
        printf("Input element %d odd: ", i + 1);
        scanf("%d", &x);
        if (x % 2 != 0)
        {
            arr[i] = x;
            i++;
        }
        else
        {
            printf("Invalid!!!\n");
        }
    } while (i < n);

    printf("The elements of array are : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}