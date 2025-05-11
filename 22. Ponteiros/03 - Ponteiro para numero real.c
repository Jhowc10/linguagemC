#include <stdio.h>
#include <Stdlib.h>

main(){
	float a, b, r;
	float *pa, *pb;
	a = 7.3;
	b = 11.5;
	pa = &a;
	pb = &b;
	r = *pa + *pb;
	
	printf("Soma de a e b via ponteiro = %f \n", r);
	
	system("pause");
}
