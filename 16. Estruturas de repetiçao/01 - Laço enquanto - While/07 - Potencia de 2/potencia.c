/*
PSEUDOCODIGO

algoritmo potenciasde2;

var
	p: inteiro;
	p <- 2;
	
inicio
	escreva "As potencias de 2 de 0 a 100";
	
	enquanto p <= 100 faça
		escreva " ", p;
		p = p*2;
	fimenquanto;
fim.
*/

#include <stdio.h>

main(){
	
	int p;
	p = 2;
	
	printf("\n\n As potencias de 2 de 0 a 100 \n\n");
	
	while(p <= 100){
		printf("%d \t", p);
		p = p*2;     // Poderia escrever assim também p *=2
	}
	printf("\n\n FIM \n\n");
	system("pause");
}
