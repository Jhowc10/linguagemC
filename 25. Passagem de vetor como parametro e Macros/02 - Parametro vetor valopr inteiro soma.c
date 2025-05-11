#include <stdio.h>
#include <stdlib.h>

// Constante simb´lica para representar o tamanho do valor
#define TAM 5

// Definição da função que recebe como parâmetro um vetor de inteiros
int somaValores(int vet[]){
	int i, soma = 0;
	
	for(i = 0;i < TAM; i++){
		soma += vet[i];
	}
	return soma;
}

main(){
	int vetor[TAM];
	int i;
	
	printf("*** Informe os dados paa o vetor ***\n");
	
	for(i = 0; i < TAM; i++){
		printf("Valor[%d]: ", i);
		scanf("%d", &vetor[i]);
	}
	int s = somaValores(vetor);  // Chama a função somaValores
	printf("\n Soma = %d \n\n", s);
	
	system("pause");
}
