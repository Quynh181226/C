/*Bai 6 : Khởi tạo và gán giá trị cho mảng số nguyên bất kỳ,
 yêu cầu người dùng nhập vào 1 số nguyên bất kỳ và sử dụng thuật
 toán tìm kiếm tuyến tính để tìm vị trí của phần tử đó trong mảng.
 Nếu có nhiều phần tử trùng với số đã nhập thì lưu tất cả vị trí
 tìm được vào một mảng và in tất cả vị trí đó ra màn hình. */

#include <stdio.h>
int main()
{
    int a[4] = {1, 8, 2, 6}, b[100], c, e = 0;
    printf("Input any value :");
    scanf("%d", &c);
    for (int i = 0; i < 4; i++)
    {
        if (c == a[i])
        {
            b[e] = i;
            e += 1;
        }
    }
    printf("Position is :");
    for (int j = 0; j < e; j++)
    {
        printf("%d ", b[j]);
    }
    return 0;
}