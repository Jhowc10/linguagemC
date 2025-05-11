// Usar vetor utilizando constante, ajuda na hora de precisar modificar para aumentar o vetor.

#include <stdio.h>
#include <stdlib.h>

// Constante simbólica que representa o tamanho do vetor
// Neste caso, se quisermos aumentar a quantidade de elementos no vetor, de 10 para 15, basta mudar a constante de 10 para 15.

#define TAM 10

main (){
	int i, vetor[TAM];
	
	for(i = 0; i < TAM; i++){
		printf("Valor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	printf("\n *** Dados do vetor *** \n");
	for(i = 0; i < TAM; i++){
		printf("%d \t", vetor[i]);
	}
	system("pause");
} 
