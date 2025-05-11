#include <stdio.h>
#include <stdlib.h>

struct Pessoa {     // Definição da estrutura
	char nome[80];
	int idade;
};

main(){
	struct Pessoa pessoa = {"Ana", 22};  // Declaração e inicialização da estrutura
	struct Pessoa *ptr;     // Declaração de um ponteiro para o tipo de estrutura
	
	ptr = &pessoa;      // Faz o ponteiro ptr apotar para a estrutura pessoa
	
	printf("% s - % d \n\n", (*ptr).nome, (*ptr).idade);
	
	system("pause");
}
