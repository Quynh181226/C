#include <stdio.h>

int main()
{

    // trong danh sach tren luu toi da 10 sinh vien
    // khai bao bien , thu tu toi da , do dai cua ki tu

    char Name[10][100], Phone[10][14], Email[10][60];
    int Age[10][2];

    // dung vong lap de thuc hien nhap ttin vao danh sach

    for (int i = 0; i < 10; i++)
    {
        printf("\nNhap thong tin sinh vien %d:\n", i + 1);
        printf("Ho va ten: ");
        scanf(" %s\n", Name[i]);
        printf("Age: ");
        scanf("%d\n", &Age[i]);
        printf("So dien thoai: ");
        scanf("%s\n", Phone[i]);
        printf("Email: ");
        scanf("%s\n", Email[i]);
    }
    printf("\nDanh sách sinh viên:\n");
    printf("STT|Ho va ten|Age|So dien thoai|Email\n");
    for (int i = 0; i < 10; i++)
    {

        printf("%d\t%s\t%d\t%s\t%s\n", i + 1, Name[i], Age[i], Phone[i], Email[i]);
    }

    return 0;
}
