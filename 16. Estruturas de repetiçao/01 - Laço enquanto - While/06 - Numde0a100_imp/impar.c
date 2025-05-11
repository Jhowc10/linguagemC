/*
algoritmo pares;

var
	a: inteiro;
	a <- 1;
	
inicio
	escreva "Os numeros pares de 0 a 100";
	
	enquanto a <= 100 faça
		se a mod 2 = 1 então
			escreva " ", a;
			a = a + 1;
		fimse;
	fimenquanto;
fim.
*/

#include <stdio.h>

main(){

	int a;
	a = 1;
	printf("Numeros impares de 0 a 100: \n");
	
	while(a <= 100){
		if (a % 2 == 1)
			printf("%d \t", a);
			a++;
	}
	printf("\n\n FIM \n\n");
	
	system("pause");
}
