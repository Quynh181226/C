#include<stdio.h>
#include<math.h>

int main(){
	float PI, bankinh, r, chuvi, dientich;
	PI = 3.14;
	bankinh = 2;
	r = bankinh;
	chuvi = 2 * PI * r;
	dientich = PI * r * r;
	printf ("Chu vi hinh tron la :%.2f\n", chuvi);
	printf ("Dien tich hinh tron la :%.2f\n", dientich);

	return 0;
}
