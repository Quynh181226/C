// bai nay tuong tu bai 7 + bai 10 Ss1
#include <stdio.h>

int main()
{
    int firstnumber, reverse = 0;

    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &firstnumber);

    if (firstnumber < 1000 || firstnumber > 9999)
    {
        printf("So nhap khong hop le!\n");
        return 1;
    }

    while (firstnumber != 0)
    {
        reverse = reverse * 10 + firstnumber % 10;
        firstnumber /= 10;
    }

    printf("So nghich dao la: %d\n", reverse);
    return 0;
}