/*Bai tap 8 : Viết chương trình yêu cầu người dùng nhập vào 3 cạnh của một tam giác,
kiểm tra xem 3 cạnh nhập vào có hợp lệ không và in ra kết quả,
nếu hợp lệ thì in ra “ Là 3 cạnh tam giác”,
nếu không hợp lệ thì in ra “Không phải 3 cạnh tam giác”*/

#include <stdio.h>

int main()
{
    float a, b, c;

    printf("Input the length of the three edge of the triangle:\n");
    printf("First edge: ");
    scanf("%f", &a);
    printf("Second edge: ");
    scanf("%f", &b);
    printf("Third edge: ");
    scanf("%f", &c);

    if (a > 0 && b > 0 && c > 0 && (a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Are three edge of a triangle.\n");
    }
    else
    {
        printf("Not three edge of a triangle.\n");
    }

    return 0;
}
