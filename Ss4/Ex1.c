// Bai 1 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên, kiểm tra xem số đó là số âm hay số dương và in màn hình.
#include <stdio.h>

int main()
{
    int firstnumber

        printf("Moi nguoi dung nhap vao mot so nguyen");
    scanf("%d", &firstnumber);

    if (firstnumber > 0)
    {
        printf("%d la so nguyen duong\n", firstnumber);
    }
    esle if (firstnumber < 0)
    {
        printf("%d la so nguyen am\n", firstnumber);
    }
    return 0;
}