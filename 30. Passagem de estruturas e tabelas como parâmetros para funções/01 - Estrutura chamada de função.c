#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura pessoa
struct Pessoa{
	char nome[80];
	int idade;
};
// Defini��o da fun��o imprimirPessoa
void imprimirPessoa(struct Pessoa p){
	printf("% s - % d", p.nome, p.idade);
}

main(){
	struct Pessoa pessoa;   // Declara��o da vari�vel do tipo Pessoa
	
	printf("Nome: ");
	gets(pessoa.nome);
	
	printf("Idade: ");
	scanf("% d ", &pessoa.idade);
	
	imprimirPessoa(pessoa);  // Chamada de fun��o imprimirPessoa.
	printf("\n\n");
	
	system("pause");
}
