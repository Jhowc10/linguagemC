/*
algoritmo string;

var
	x: vetor[1..100] de char;
	
inicio
	escreva"Entre com seu nome";
	leia x;
	
	escreva"Voce entrou com ", x;
fim.
*/

#include <stdio.h>

main(){
	
	char x[100];
	int i, c;
	i = 0;
	
	printf("Entre com seu nome: ");
	scanf("%s", x);
	printf("\n\n Voce entrou com %s \n\n", x);
	
	system("pause");
}


