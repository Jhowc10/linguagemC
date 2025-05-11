#include <stdio.h>
#include <stdlib.h>

#define TAM 5 // Constante simbólica que representa o tamanho da agenda

// Definição da estrutura contato
struct Contato{
	char nome[80];
	char telefone[15];
};
main(){
	
// Declaração da tabela agenda (vetor de contato)
	struct Contato agenda[TAM];
	int i;
// Leitura dos dados da agenda
// Como agenda é um vetor, usamos um laço for para percorre-lo
	for(i = 0; i < TAM; i++){
		printf("Nome: ");
		gets(agenda[i].nome);
		
		printf("Telefone: ");
		gets(agenda[i].telefone);
	}
// Impressao dos contatos d agenda
	printf("\n *** Lista de Contatos ***\n");
	
	for(i = 0; i < TAM; i++){
		printf("%s - %s \n", agenda[i].nome, agenda[i].telefone);
	}
	system("pause");
}
