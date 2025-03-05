#include <stdio.h>
#define PI 3.14

int main()
{
    float radius, perimeter, area;

    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &radius);

    perimeter = 2 * PI * radius;
    area = PI * radius * radius;

    printf("Chu vi hinh tron: %.2f\n", perimeter);
    printf("Dien tich hinh tron: %.2f\n", area);
    return 0;
}