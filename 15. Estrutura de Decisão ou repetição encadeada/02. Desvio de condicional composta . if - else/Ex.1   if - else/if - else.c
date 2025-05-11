#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a, b, x, r;
	printf ("\n Digite os falores a e b:");
	scanf ("%d%d", &a, &b);
	x = a + b;
	
	if (x > 10) {
		r = x + 5;
	}else{
		r = x - 7;
	}
	
	printf ("\n Valor de R: %d \n", r);
	system ("pause");
	
	return 0;
}
