/* Bai tap 3 : Viết chương trình yêu cầu người dùng nhập vào một số nguyên. Kiểm
 tra nếu số đó có chia hết cho 3, chia hết cho 5 hoặc chia hết cho cả 3 và 5
 không, in kết quả tương ứng ra màn hình.*/
#include <stdio.h>
int main()
{
  int number;
  printf("Nhap so mot so nguyen : ");
  scanf("%d", &number);
  if (number % 3 == 0 && number % 5 == 0)
  {
    printf("So vua nhap chia het cho 3 va 5");
  }
  else if (number % 3 == 0)
  {
    printf("So vua nhap chia het cho 3 ");
  }
  else if (number % 5 == 0)
  {
    printf("So vua nhap chia het cho 5");
  }
  else
  {
    printf("So vua nhap khong chia het cho ca 3 va 5");
  }
  return 0;
}
