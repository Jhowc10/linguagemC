/*
algoritimo potenciasde2;

var
	p : inteiro;
	
inicio
	escreva "A serie de potencias de 2 de 0 a 100"
	
	para p de 2 até 100 passo = p ? p * 2 faça
		escreva " ", p;
	fimpara;
fim.
*/

#include <stdio.h>

main(){
	
	int p;
	
	printf("\n\n A serie de potencias de 2 a 100\n\n");
	
	for(p = 2; p <= 100; p = p*2){
		printf("%d \n", p);
	}
	printf("\n\n FIM \n\n");
//	system("pause");
}
