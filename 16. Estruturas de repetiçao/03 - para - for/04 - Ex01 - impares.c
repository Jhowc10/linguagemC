/*
algoritimo numersImpares;

var
	inteiro : i
	
inicio

	escreva "A sequencia de numeros impares de 0 a 100";
	
	para i de 0 at� 100 passo 1 fa�a
		se i mod 2 <> 1 ent�o
			escreva " ", i;
		fimse;
	fimpara;
fim
*/
	
#include <stdio.h>

main(){
	
	int i;
	
	printf("A sequencia de numeros impares de 0 a 100: ");
	
	for (i = 0; i <= 100; i++){
		if(i % 2 == 1){
			printf("%d \t", i);
		}
	}
	printf("\n\n FIM \n\n");
	system("pause");
}
