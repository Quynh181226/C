#include <stdio.h>
#include <string.h>

int main() {
    char password_present[] = "18122006";
    char password_entered[50];

    printf("Input Password : ");
    scanf("%s", password_entered);

    if (strcmp(password_entered, password_present) == 0) {
        printf("Valid!!!\n");
    } else {
        printf("Invalid ^ ^\n");
    }

    return 0;
}