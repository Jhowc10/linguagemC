#include <stdio.h>
#include <stdlib.h>

#define LINHAS 5
#define COLUNAS 5

main(){
// Declara a matriz
	float matriz [LINHAS][COLUNAS];
	int i, j;
	
	printf(" *** Informe os dados da matriz *** \n");
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("Valor[%d][%d]: ", i, j);
			scanf("%f", &matriz[i][j]);
		}
	}
// Soma os elementos superiores a 20,75, guarda a quantidade de elementos somados.
	float soma = 0;
	int quantidade = 0;
	
	printf("\n *** Dados da Matriz *** \n\n");
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; i++){
			printf("%.2f", matriz[i][j]);
			
			if(matriz[i][j] > 20.75){
				soma += matriz[i][j];
				quantidade++;
			}
		}
		printf("\n");
	}
	float media = 0;
	
	if(quantidade > 0){
		media = soma / quantidade;
	}
	printf("\n Media = %.2f \n\n", media);
	system("pause");
}
