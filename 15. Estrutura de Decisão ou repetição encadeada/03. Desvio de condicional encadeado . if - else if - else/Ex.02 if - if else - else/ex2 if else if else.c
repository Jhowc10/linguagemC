#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;
	
	printf("\n Digite o valor de x:");
	scanf ("%d", &x);
	
	if (x > 0) {
		x = x * 5;
	}else{
		if (x < 0) {
			x = x * 7;
		}else{
			x = x - 3;
		}
	}
	
	printf ("\n Novo valor de x: %d \n", x);
	
	system ("pause");
	
	return 0;
}
