#include <stdio.h>
#include <stdlib.h>

// Declara uma constante para o tamanho dos vetores A, B, C
#define TAM_ABC 5
// Declara uma constante para o tamanho do vetor D
#define TAM_D 15

main(){

// Declarção dos vetores
// SÃO 4 VETORES E CADA UM TERÁ O TAMANHO DE 5 ELEMENTOS	
	int A[TAM_ABC], B[TAM_ABC], C[TAM_ABC], D[TAM_ABC];
	int i;
	
// Leitura do vetor A
	printf("\n *** Informe os valores do vetor A *** \n");
	
	for(i = 0;i < TAM_ABC; i++){
		prinf("A[%d] ", i);
		scanf("%d", &A[i]);
	}
// Leitura do vetor B
	printf("\n *** Informe os valores do vetor B *** \n");
	
	for(i = 0;i < TAM_ABC; i++){
		prinf("B[%d] ", i);
		scanf("%d", &B[i]);
	}
// Leitura do vetor C
	printf("\n *** Informe os valores do vetor C *** \n");
	
	for(i = 0;i < TAM_ABC; i++){
		prinf("C[%d] ", i);
		scanf("%d", &C[i]);
	}
// Crianção do vetor D	
	for(i = 0;i < TAM_ABC; i++){
		D[i] = A[i];
		D[i + 5] = B[i];
		D[i + 10] = C[i]; 
	}
// Impressão do vetor D
	printf("\n *** Valores do vetor D *** \n");
	
	for(i = 0; i < TAM_D; i++){
		printf("D[%d] = %d \n", i, D[i]);
	}
	
	system("pause");
}
