#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 5

struct Produto{
	int codigo;
	char descricao[80];
	float preco;
};
main(){
	struct Produto produtos[TAM];
	int i;
	
	printf("*** Informa os Dados dos Produtos ***\n");
	
	for(i = 0; i < TAM; i++){
		printf("\n *** Produto %d *** \n", i);
		
		printf("Codigo: ");
		scanf("%d", &produtos[i].codigo);
		getchar();
		
		printf("Descricao: ");
		gets(produtos[i].descricao);
		
		printf("Preco: ");
		scanf("%f", &produtos[i].preco);		
	}
// Impressão dos produtos
	printf("\n\n *** Dados dos Produtos *** \n");
	
	for(i = 0;i < TAM; i++){
		printf("%d ", produtos[i].codigo);
		printf("%s ", produtos[i].descricao);
		printf("%.2f \n", produtos[i].preco);
	}
	system("pause");
}
