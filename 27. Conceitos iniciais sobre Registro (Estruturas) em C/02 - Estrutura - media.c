#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura aluno
struct Aluno{
	int codigo;
	char nome[80];   // O nome � apresentado por uma string
	float notas[3];  // As notas s�o armazenadas em um vetor
};
main(){
	
// Declara��o da vari�vel da estrutura Aluno
// Estrutura    Nome da estrutura    Variavel para chamar a estrutura
	struct           Aluno                    umAluno;
	printf("Codigo: ");
	scanf("%d", &umAluno.codigo);
	getchar();
	
// Leitura do nome usando o comando gets() para ler a string
	printf("Nome: ");
	gets(umAluno.nome);
	
// Leitura das notas do aluno. Percorremos o vetor com um for
	int i;
	for(i = 0; i < 3; i++){
		printf("Nota %d: ", i + 1);
		scanf("%f", &umAluno.notas[i]);
	}
	float soma = 0;
	
// Calculo da m�dia do aluno
	for(i = 0; i < 3; i++){
		soma += umAluno.notas[i];
	}
	printf("\n *** Dados do Aluno ***\n");
	printf("Codigo: %d \n", umAluno.codigo);
	printf("Nome: ");
	puts(umAluno.nome); // L� a variavel char
	printf("Notas: %.1f %.1f %.1f \n", umAluno.notas[0], umAluno.notas[1], umAluno.notas[2]);
	printf("Media: %.1f \n\n", soma / 3);
	
	system("pause");
}
