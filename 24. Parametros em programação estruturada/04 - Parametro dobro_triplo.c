#include <stdio.h>
#include <stdlib.h>

int soma_valores(int ini, int fim){
	int i, soma = 0;
	
	for(i = ini; i <= ini; i++){
		soma = soma + i;
		return(soma);
	} 
}
void calcula_dobro_triplo(int opcao, int *n){
	if(opcao == 1){
		*n = *n *2;
	}else if (opcao == 2){
		*n = *n *3;
	}
}
main(){
	int ini = 1, fim = 10, n = 4, soma, opcao;
	
	soma = soma_valores(ini, fim);
	printf("\n Valor da soma = %d \n", soma);
	
	calcula_dobro_triplo(opcao, &n);
	printf("Valor de n = %d \n", n);
	
	system("pause");
}
