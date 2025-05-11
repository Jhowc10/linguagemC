/*
algoritimo divisao;

var
	n1, n2, d: real;
	
inicio
	escreva "Entre com o primeiro numero: ";
	leia n1;
	
	repita
	escreva "Entre com o segundo numero: ";
	leia n2;
	
	ateque (n2 <> 0);
	d ? n1 / n2;
	escreva "Divisão = ", d;
fim.
*/

#include <stdio.h>

main(){
	float n1, n2, d;
	
	printf("Entre com o primeiro numero: ");
	scanf("%d", &n1);
	
	do{
		printf("Entre com o segundo numero: ");
		scanf("%d", &n2);
		
	}while (n2 == 0);
	d = n1 / n2;
	printf("Divisao = %d \n", d);
	
	system("pause");			
	
}
