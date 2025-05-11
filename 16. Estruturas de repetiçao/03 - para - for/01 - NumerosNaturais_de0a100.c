/*
algoritimo naturais

var
	i : inteiro;
	
inicio
	escreva "A serie dos naturais de 0 a 100";
	
	para i de 0 ate 100 passo 1 faça
		escreva " ", i;
	fimpara;
fim.
*/

#include <stdio.h>

main(){
	
	int i;
	
	printf("\n\n Os numeros naturais de 0 a 100 \n\n");
	
	for(i = 0; i <= 100; i++){
		printf("%d \n", i);
	}
	printf("\n\n\n FIM \n\n\n");
	system("pause");
}
