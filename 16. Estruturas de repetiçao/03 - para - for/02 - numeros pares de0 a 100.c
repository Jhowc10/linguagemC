/*
algoritimo pares

var
	i : intero;
	
inicio
	escreva "A serie dos pares de 0 a 100";
	
	para i de 0 ate 100 passo 1 faça
		se i mod 2 = 0 então
			escreva " ", i;
		fimse;
	fimpara;
fim.
*/

#include <stdio.h>

main(){
	
	int i;
	
	printf("\n A serie dos pares de 0 a 100 \n");
	
	for(i = 0; i <= 100; i++){
		if(i % 2 == 0){
			printf("%d \t", i);
		}
	}
	system("\n pause");
}

