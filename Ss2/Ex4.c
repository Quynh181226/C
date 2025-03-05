#include<stdio.h>
#include<math.h>

int main(){
	int edeg, erea, perimeter;
	edeg = 2;
    perimeter = edeg * 4 ;
    // Or (edeg + edeg)/2 = chu vi
    erea = edeg * edeg;
    printf ("Chu vi hinh vuong cua %d là : %d\n",edeg,perimeter);
    printf ("Dien tich hinh vuong cua %d là : %d\n", edeg, erea);

	return 0;
}
