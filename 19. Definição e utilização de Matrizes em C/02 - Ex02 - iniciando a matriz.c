#include <stdio.h>
#include <stdlib.h>

#define LINHAS 3
#define COLUNAS 4

main(){
// Declara�a� e inicializa��o da matriz
	int matriz[LINHAS][COLUNAS] = {
		{3, 5, 2, 1, 10},
		{15, 12, 18, 4, 6},
		{7, 9, 13, 16, 20}
	};
// Apresenta��o dos dados de matriz
	int i, j;
	
	printf("*** Dados da Matriz *** \n");
	
	for(i = 0; i < LINHAS; i++){
		for(j = 0; j < COLUNAS; j++){
			printf("%2d \t", matriz[i][j]);
		}
		printf("\n");
	}
	system("pause");
}
