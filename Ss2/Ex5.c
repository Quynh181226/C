#include<stdio.h>
#include<math.h>

int main(){
	int wide, longg, erea, perimeter;
	wide = 2;
	longg = 4;
    perimeter = (longg + wide) * 2;
    erea = longg * wide;
    printf ("Chu vi hinh chu nhat cua %d va %d là : %d\n",longg, wide, perimeter);
    printf ("Dien tich hinh chu nhat cua %d va %d là : %d\n", longg, wide, erea);

	return 0;
}
