/*Viết chương trình yêu cầu người dùng nhập vào 3 số nguyên. 
Kiểm tra xem số thứ 3 có nằm trong khoảng giữa số thứ 2 và số thứ nhất không,
 sau đó in kết quả ra màn hình.*/
#include<stdio.h>
int main(){
    int numberone, numbertwo, numberthree;
    printf("Nhap vao 3 so nguyen : \n");
    scanf("%d %d %d",&numberone, &numbertwo, &numberthree);

    if(numbertwo < numberone){
        if(numberone < numberthree && numbertwo > numberthree){
            printf("So %d nam trong khoang giua 2 so thu nhat va so thu hai", numberone, numbertwo, numberthree);
        }else{
            printf("So %d khong nam trong khoang giua 2 so thu nhat va so thu hai", numberone, numbertwo, numberthree);
        }
    }else if(numberone < numbertwo){
        if(numberthree > numberone  && numberthree < numbertwo){
            printf("So %d nam trong khoang giua 2 so thu nhat va so thu hai", numberone, numbertwo, numberthree);
        }else{
            printf("So %d khong nam trong khoang giua 2 so thu nhat va so thu hai", numberone, numbertwo, numberthree);
        }
    }
        return 0;
}


