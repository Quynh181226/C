
#include <stdio.h>

int main()
{
    char name[100];
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin);
    printf("Hellohelloo: %s !\n", name);
    return 0;
}