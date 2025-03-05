/*Bai tap 2 : Viết chương trình khai báo và gán giá trị cho một biến số nguyên cho trước,
 yêu cầu người dùng nhập vào một số cho đến khi số được nhập trùng với số cho trước thì
 kết thúc chương trình.*/
#include <stdio.h>

int main()
{
    int integer_number = 17;
    int number;

    printf("Input number: ");
    scanf("%d", &number);

    while (number != integer_number)
    {
        printf("Invalid ^ ^: ");
        scanf("%d", &number);
    }

    printf("Valid %d!!!\n", integer_number);
    return 0;
}
