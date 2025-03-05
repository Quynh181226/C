/*Bai tap 9 : Viết chương trình yêu cầu người dùng hiển thị và thực hiện từng chức năng theo menu sau:
	MENU
Nhập 3 số
Tổng 3 số
Trung bình cộng 3 số
Số nhỏ nhất
Số lớn nhất
Thoát
  Lựa chọn của bạn: 
Sau khi nhập lựa chọn chương trình sẽ thực hiện chức năng tương ứng, sau khi thực hiện chức năng menu sẽ lại hiện lên. Chương trình sẽ lặp lại liên tục cho đến khi người dùng chọn thoát.*/

#include <stdio.h>

int main() {
    int a = 0, b = 0, c = 0, choice;

menu:
    printf("\nMENU\n");
    printf("1. Input 3 numbers\n");
    printf("2. Sum 3 numbers\n");
    printf("3. Average of 3 numbers\n");
    printf("4. Smallest number\n");
    printf("5. Largest number\n");
    printf("6. Exit\n");
    printf("Your choice is: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Input 3 numbers: ");
            scanf("%d %d %d", &a, &b, &c);
            break;
        case 2:
            printf("Sum 3 numbers: %d\n", a + b + c);
            break;
        case 3:
            printf("Average of 3 numbers: %.2f\n", (a + b + c) / 3.0);
            break;
        case 4:
            printf("Smallest number: %d\n", (a < b && a < c) ? a : (b < c) ? b : c);
            break;
        case 5:
            printf("Largest number: %d\n", (a > b && a > c) ? a : (b > c) ? b : c);
            break;
        case 6:
            printf("Exit.\n");
            return 0;
        default:
            printf("Invalid ^ ^.\n");
    }
    goto menu;

    return 0;
}