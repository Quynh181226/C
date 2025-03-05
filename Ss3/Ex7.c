// B1 : khai bao thu vien chuan trong C
#include <stdio.h>

// khai bao ham main de thuc thi chuong trinh
int main()
{
    // khai bao bien voi kieu du lieu so nguyen
    int firstnumber, sum = 0;

    // B2 : Moi nguoi dung nhap 1 so nguyen co 4 chu so vao ban phim
    printf("Moi ban nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &firstnumber);

    /* B3 : kiem tra dieu kien vong lap phu hop de the hien ket qua
            Or o day ta co the sua buoc 3 bang cach su dung vong lap do while de lap lai cho den khi nhap gia tri dung voi yeu cau de bai cho
            va ben duoi co the thay thanh vong for thay vi while deu duoc */
    if (firstnumber < 1000 || firstnumber > 9999)
    {
        printf("So nhap khong hop le!\n");
        return 1;
        // the hien chuong trinh co loi va khong thuc thi thanh cong
    }

    while (firstnumber != 0)
    {
        sum += firstnumber % 10;
        // dung toan tu gan nay de tang gia tri cua bien sum len
        firstnumber /= 10;
    }

    // B4 : in ra ket qua
    printf("Tong cac chu so da nhap vao la: %d\n", sum);
    // the hien chuong trinh khong co loi va thuc thi thanh cong
    return 0;
}
