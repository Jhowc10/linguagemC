#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura Data
struct Data{
	int dia, mes, ano;
};
// Definição da estrutura Endereço
struct Endereco{
	char rua[100];
	char numero[10];
	char bairro[30];
};
// Definição da estrura pessoa
struct Pessoa{
	char nome[80];
//   Est    No est q chamar	    var p chamar
	struct     Endereco           endereco;
	struct       Data             dataNasc;
};

main(){
	
// Declaração da variável do tipo pessoa
	struct Pessoa umaPessoa;
	
// Leitura do nome
	printf("Nome: ");       
	gets(umaPessoa.nome);	// Armazena o nome
	
	printf("Rua: ");
	gets(umaPessoa.endereco.rua);
	
	printf("Numero: ");
	gets(umaPessoa.endereco.numero);
	
	printf("Bairro: ");
	gets(umaPessoa.endereco.bairro);
	
// Leitura da data de nascimento
	printf("Dia: ");
	scanf("%d", &umaPessoa.dataNasc.dia);
	
	printf("Mes: ");
	scanf("%d", &umaPessoa.dataNasc.mes);
	
	printf("Ano: ");
	scanf("%d", &umaPessoa.dataNasc.ano);
	
// Impressão dos dados da pessoa
	printf("\n\n ***Dados da Pessoa*** \n");
	printf("Nome: ");
	puts(umaPessoa.nome);  // puts = Escreva o char
	
	printf("Endereco: %s,", umaPessoa.endereco.rua);
	printf("%s -", umaPessoa.endereco.numero);
	printf("- %s \n", umaPessoa.endereco.bairro);
	
	printf("Data de Nascimento: %d/", umaPessoa.dataNasc.dia);
	printf("%d/", umaPessoa.dataNasc.mes);
	printf("%d. \n", umaPessoa.dataNasc.ano);
	
	system("pause");
		
}
