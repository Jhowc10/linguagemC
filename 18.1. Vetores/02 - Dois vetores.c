#include <stdio.h>
#include <stdlib.h>

main(){
	
// Declaração dos dois vetores
	int A[8], B[8];
	int i;
	
// Leitura do vetor A
	printf("*** Informe os dados do vetor A *** \n");
	
	for(i = 0; i < 8; i++){
		printf("A[%d]: ", i);
		scanf("%d", &A[i]);
	}
// Calculo do vetor B
	for(i = 0; i < 8; i++){
		B[i] = A[i] * 3;
	}
// Apresentação dos elementos do vetor B
	printf("\n *** Dados do vetor B *** \n");
	
	for(i = 0; i < 8; i++){
		printf("B[%d] = %d \n", i, B[i]);
	}
	system("pause");
}
