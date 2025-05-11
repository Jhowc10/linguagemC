// 	PSEUDOCODIGO	
/*
algoritmo pares;

var
	i: inteiro;
	i <- 0;
	
inicio
	escreva "Os numeros pares de 0 a 100";
	
	enquanto i <= 100 faça
		se i mod 2 = 0 então
			escreva " ", i;
			i = i + 1;
		fimse;
	fimenquanto;
fim.
*/


#include <stdio.h>

main(){
	
	int i;
	i = 0;
	
	printf("\n\n Os numeros pares de 0 a 100 \n\n");
	
	while(i <= 100){
		if(i % 2 == 0)
			printf("%d \n", i);
			i++;
		
	}
	printf("\n\n FIM \n\n");
	system("pause");
}

