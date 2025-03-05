// Bai 2 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên. Kiểm tra xem số đó là số chẵn hay số lẻ và hiển thị kết quả.
#include <stdio.h>

int main()
{
    int firstnumber;
    printf("Moi ban nhap vao mot so nguyen : ");
    scanf("%d", &firstnumber);

    if (firstnumber % 2 == 0)
    {
        printf("%d la so chan", firstnumber);
    }
    else
    {
        printf("%d la so le", firstnumber);
    }
    return 0;
}