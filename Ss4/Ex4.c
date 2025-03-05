/* Bai tap 4 : Viết chương trình yêu cầu người dùng nhập vào số tháng. Chương trình sẽ in ra tháng được nhập có bao nhiêu ngày, nếu tháng không hợp lệ thì in ra số tháng không hợp lệ.*/
#include <stdio.h>
int main()
{
  int month;
  printf("Nhap vao so month (1-12) : ");
  scanf("%d", &month);

  if (month < 1 || month > 12)
  {
    printf("So thang khong hop le\n");
  }
  else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 12 || month == 10)
  {
    printf("Thang %d co 31 ngay\n ");
  }
  else if (month == 4 || month == 6 || month == 9 || month == 11)
  {
    printf("Thang %d co 30 ngay\n ");
  }
  else
    (month == 2)
    {
      printf("Thang co 28 ngay\n ");
    }
  return 0;
}