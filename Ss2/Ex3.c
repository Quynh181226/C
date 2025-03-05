#include<stdio.h>
#include<math.h>

int main(){
	int a,b,sum,division,subtraction,mutiplication;
	a = 20;
	b = 5;
	sum = a + b;
	mutiplication = a * b;
	division = a / b;
	subtraction = a - b;
	printf ("Tong cua so nguyen %d va %d la :%d\n",a, b, sum);
	printf ("Thuong cua so nguyen %d va %d la :%d\n",a, b, division);
	printf ("Tich cua so nguyen %d va %d la :%d\n",a, b, mutiplication);
	printf ("Hieu cua so nguyen %d va %d la :%d\n",a, b, subtraction);

	return 0;
}