#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura pessoa
struct Pessoa{
	char nome[80];
	int idade;
};
// Definição da função imprimirPessoa
void imprimirPessoa(struct Pessoa p){
	printf("% s - % d", p.nome, p.idade);
}

main(){
	struct Pessoa pessoa;   // Declaração da variável do tipo Pessoa
	
	printf("Nome: ");
	gets(pessoa.nome);
	
	printf("Idade: ");
	scanf("% d ", &pessoa.idade);
	
	imprimirPessoa(pessoa);  // Chamada de função imprimirPessoa.
	printf("\n\n");
	
	system("pause");
}
