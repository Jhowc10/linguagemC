#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3  // Utiliza constantes simbólicas para definir a quantidade de linhas
#define COLUNAS 4  // Utiliza constantes simbólicas para definir a quantidade de colunas 

main(){
// declaração da matriz
	int matriz[LINHAS][COLUNAS];
// i representa a linha 
// j representa a coluna
	int i, j;
	
	for(i = 0; i < LINHAS; i++){        // Vai de 0 até a quantidade de linhas 1
		for(j = 0; j < COLUNAS; j++){    // Vai de 0 até a quantidade de colunas 1
			printf("matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}		
	}
// Calcula a soma dos valores e apresenta os dados da matriz
	int soma = 0;
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; i++){
			soma += matriz[i][j];
			printf("%d \n", matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n Soma = %d \n", soma);
	system("pause");
}
