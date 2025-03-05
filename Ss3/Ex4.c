// bai tap 3 = bai tap tong hop
#include <stdio.h>

int main()
{
    float math, literature, english, total, average;

    printf("Nhap diem mon Toan: ");
    scanf("%f", &math);
    printf("Nhap diem mon Van: ");
    scanf("%f", &literature);
    printf("Nhap diem mon Anh: ");
    scanf("%f", &english);

    total = math + literature + english;
    average = total / 3;

    printf("Tong diem: %.2f\n", total);
    printf("Ðiem trung binh: %.2f\n", average);
    return 0;
}