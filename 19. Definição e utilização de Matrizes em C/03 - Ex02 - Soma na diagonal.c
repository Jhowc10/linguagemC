#include <stdio.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 5

main(){
// declara a matriz
	int matriz[LINHAS][COLUNAS], i, j;
	
	printf("*** Informe os dados da Matriz *** \n");
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("Valor[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
// Calcula a soma da diagonal principal e apresenta os dados da matriz na tela
	int soma = 0;
	
	printf("\n ***Dados da Matriz*** \n\n");
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("%d", matriz[i][j]);
			
			if(i == j){  // Se o índice da linha é igual ao da coluna, então o elemento está na diagonal principal.
				soma += matriz[i][j];
			}
		}
		printf("\n");
	}
	printf("\n Soma = %d \n\n", soma);
	system("pause");
}
