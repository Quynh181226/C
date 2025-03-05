/* Bai 10 :Viết chương trình yêu cầu người dùng nhập vào một số nguyên bất kỳ,
 kiểm tra xem số đã nhập có phải số nguyên tố hay không và in kết quả ra màn hình*/
#include <stdio.h>

int main()
{
    int number, i;

    printf("Input an integer: ");
    scanf("%d", &number);

    if (number <= 1)
    {
        printf("%d Invalid.\n", number);
        return 1;
    }

    for (i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            printf("%d_Invalid ^ ^\n", number);
            return 1;
        }
    }

    printf("%d_Valid !!!\n", number);
    return 0;
}