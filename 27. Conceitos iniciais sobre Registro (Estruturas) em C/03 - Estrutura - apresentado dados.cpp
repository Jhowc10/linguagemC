#include <stdio.h>
#include <stdlib.h>

struct Livro{
	char titulo[80];
	char autor[80];
	char editora[40];
	int ano;
};
main(){
	
// Declara��o de uma variavel do tipo Livro
// Estrutura  Nome da Estrut    Variavel para chamar a estrut
	struct       Livro                    liv;
	printf("*** Informe os dados do livro ***\n");
	printf("Titulo: ");
	gets(liv.titulo); //  gets armazena o char / liv = variavel / .titulo = variavel da estrutura
	
	printf("Autor: ");
	gets(liv.autor);
	
	printf("Editora: ");
	gets(liv.editora);
	
	printf("Ano de Publicacao: ");
	scanf("%d", &liv.ano);
	
// Impress�o dos dados do livro
	printf("\n ***Dados do Livro***\n");
	printf("Titulo: %s \n", liv.titulo); // %s = l� a string/char /  liv.titulo = onde est� guardado o conteudo
	printf("Autor: %s \n", liv.autor);
	printf("Editora: %s \n", liv.editora);
	printf("Ano de Publicacao: %d \n\n", liv.ano);
	
	system("pause");
}
