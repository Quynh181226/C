// khai bao thu vien chuan trong c
#include<stdio.h>

// khai bao ham main de bat dau chuong trinh trong c
int main(){

	// kieu du lieu luu tru so nguyen (interger), pham vi -2^31 den 2^31 - 1 (2 or 4 byte).
	int it;

	// kieu du lieu luu tru so nguyen khong dau, pham vi tu 0 den 2^32 - 1 (2 or 4 byte).
	unsigned int is;

	// kieu du lieu luu tru so thuc (float)
	// (float) do chinh xac 6-7 chu so thap phan (4 byte).
	float really;

	// (Double) co do chinh xac kep 15-16 chu so thap phan (8 byte)
	double sleepy;

	// kieu du lieu luu tru ky tu (character) co trong bang ASCII, pham vi -128 toi 127 or 0 toi 255 (1 byte)
	char itt;

	// Kieu du lieu so nguyen ngan, pham vi tu -32,768 den 32,767 (2 byte).
	short iss;

	// Kieu du lieu luu tru so nguyen rat lon (8 byte, tu -2^63 den 2^63-1).
	long long reallyy;

	// Kieu du lieu so nguyen dai, pham vi luu tru lon hon kieu int (4 byte).
	long sleepyy;

	// kieu du lieu luu tru ki tu khong dau, so nguyen, pham vi tu 0 den 255 (1 byte)
	unsigned char rat;

	//kieu du lieu luu tru so nguyen khong dau, pham vi 0 den 18446744073709551615 (8 byte)
	unsigned long long buon;

    // lieu du lieu luu tru so nguyen ngan khong dau, pham vi 0 den 65.535 (2 byte)
    unsigned short ngu;

    // in tat ca cac du lieu da khai bao tren ra man hinh
    printf("int it = %d\n", it);
    printf("float really = %f\n", really);
    printf("double sleepy = %lf\n", sleepy);
    printf("char itt = %c\n", itt);
    printf("unsigned int is = %u\n", is);
    printf("short iss = %hi\n", iss);
    printf("long sleepyy = %ld\n", sleepyy);
    printf("long long reallyy = %lld\n", reallyy);
    printf("unsigned long long i = %llu\n", buon);
    printf("unsigned short ngu = %hu\n", ngu);
    printf("unsigned char rat = %c\n ", rat);

    // tra ve gia tri dung , chuong trinh ket thuc thanh cong
    // tat ca cac bien voi  cac kieu du lieu khac nhau tren deu khong khai bao gia tri => ....
    return 0;
}
