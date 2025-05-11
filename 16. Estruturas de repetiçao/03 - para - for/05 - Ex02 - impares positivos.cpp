/*
algoritimo impares;

var
	i, q:inteiro;
	
inicio
	escreva "Entre com a quantidade de termos da serie impares: ";
	leia q;
	
	escreva "A serie dos impares de 0 a ", q;
	
	para i de 0 até q passo 1 faça
		se i mod 2 == 1 então
			escreva" ", i;
		fimse;
	fimpara;
fim.
*/

#include <stdio.h>

main(){
	
	int i, q;
	
	printf("\n Entre com a quantidade de termo da serie impares: \n");
	scanf("%d", &q);
	
	printf("\n\n Os numeros impares de 0 a %d \n\n", q);
	for(i = 0; i <= q; i++){
		if(i % 2 == 1){
			printf("%d \t", i);
		}
	}
	printf("\n\n FIM \n\n");
//	system("pause");
}
