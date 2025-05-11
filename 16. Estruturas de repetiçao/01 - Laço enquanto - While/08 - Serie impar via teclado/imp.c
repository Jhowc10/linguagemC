/*
PSEUDOCODIGO

algoritmo impares;

var
	i, q: inteiro;
	i = 0;
	
inicio
	escreca "Entre com o numero de termo da serie impares: ";
	leia q;
	
	escreva "A serie dos impares de 0 a   sao", q;
	
	enquanto i <= q faça
		se i mod 2 <> 0 então
			escreva " ", i;
			i++;
		fimse;
	fimenquanto;
fim.		
*/

#include <stdio.h>

main(){
	
	int i, q;
	i - 0;
	
	printf("\n Entre com o numero de termo da serie impares: ");
	scanf("%d", &q);
	
	printf("\n\n Os numeros impares de 0 a %d sao: \n\n", q);
	
	while(i <= q){
		if(i % 2 != 0)
			printf("%d \n", i);
			i++;
	}
	system("pause");
}
