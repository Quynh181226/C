// Bai 6 : Tinh tien dien
#include <stdio.h>

int main() {
    int old_index, new_index,Electric_index;
    double Electric_bill = 0;

    printf("Moi ban nhap chi so cong to dien dau va cuoi thang !!!\n");
    printf("Input old index : ");
    scanf("%d", &old_index);
    printf("Input new index : ");
    scanf("%d", &new_index);

    if (new_index < old_index) {
        printf("Invalid !!!\n");
        return 1;
    }

   Electric_index = new_index - old_index;

     switch (Electric_index / 50) {
        case 0: 
            Electric_bill = Electric_index * 10000;
            break;
        case 1: 
            Electric_bill = 50 * 10000 + (Electric_index - 50) * 15000;
            break;
        case 2: 
            Electric_bill = 50 * 10000 + 50 * 15000 + (Electric_index - 100) * 20000;
            break;
        case 3: 
            Electric_bill = 50 * 10000 + 50 * 15000 + 50 * 20000 + (Electric_index - 150) * 25000;
            break;
        default: 
            Electric_bill = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (Electric_index - 200) * 30000;
            break;
    }

    printf("Total electric bill : %.3f VND\n", Electric_bill);
    return 0;
}