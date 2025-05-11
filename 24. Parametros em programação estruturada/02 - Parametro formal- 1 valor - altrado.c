#include <stdio.h>
#include <stdlib.h>

void quadrado(int x){
	x = x * x;
	printf("\n Valor de x = %d", x);
}

main(){
	int x = 4;
	quadrado(x);
	
	printf("\n Valor de x = %d \n", x);
	system("pause");
}

