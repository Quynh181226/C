/*Baitap6 : Viết chương trình yêu cầu người dùng nhập vào 2 số bất kỳ, hiển thị và thực hiện các chức năng theo menu sau:
    CALCULATOR
Tổng 2 số
Hiệu 2 số
Tích 2 số
Thương 2 số
Thoát
  Lựa chọn của bạn:
Sau khi nhập lựa chọn chương trình sẽ thực hiện chức năng tương ứng, sau khi thực hiện chức năng menu sẽ lại hiện lên. Chương trình sẽ lặp lại liên tục cho đến khi người dùng chọn thoát.   */
#include <stdio.h>

int main()
{
    float firstnumber, secondnumber, result;
    int choice;

    while (1)
    {
        // Hiển thị menu
        printf("\nCALCULATOR\n");
        printf("1. Tổng 2 số\n");
        printf("2. Hiệu 2 số\n");
        printf("3. Tích 2 số\n");
        printf("4. Thương 2 số\n");
        printf("5. Exit\n");
        printf("Your choice is: ");
        scanf("%d", &choice);

        if (choice == 5)
        {
            printf("Exit\n");
            break;
        }

        printf("Input firstnumber: ");
        scanf("%f", &firstnumber);
        printf("Input secondnumber: ");
        scanf("%f", &secondnumber);

        switch (choice)
        {
        case 1:
            result = firstnumber + secondnumber;
            printf("Tổng = %.2f\n", result);
            break;
        case 2:
            result = firstnumber - secondnumber;
            printf("Hiệu = %.2f\n", result);
            break;
        case 3:
            result = firstnumber * secondnumber;
            printf("Tích = %.2f\n", result);
            break;
        case 4:
            if (secondnumber != 0)
            {
                result = firstnumber / secondnumber;
                printf("Thương = %.2f\n", result);
            }
            else
            {
                printf("Error !!!\n Not divisible by 0.\n");
            }
            break;
        default:
            printf("Invalid ^ ^.\n");
            break;
        }
    }

    return 0;
}
