#include <stdio.h>
#include <stdlib.h>

// Constante simbolica que representa o tamanho do vetor
#define TAM 10

// Defini��o da fun��o inicializaVetor
void inicializaVetor(int v[]){
	int i;
	
	for(i = 0; i < TAM; i++){
		v[i] = 1;
	}
}
// Defini��o  da fun��o imprimeVetor
void imprimeVetor(int v[]){
	int i;
	
	for(i = 0; i < TAM; i++){
		printf("%d", v[i]);
	}
}

main(){
	int vetor[TAM];   // Chama o vetor
	inicializaVetor(vetor);  // Chama a fun��o iniciaVetor
	imprimeVetor(vetor);   // Chama a fun��o imprimeVetor
	
	printf("\n\n");
	
	system("pause");
}
