#include <stdio.h>
#include <stdlib.h>

#define TAM 7

struct Aluno{
	int matricula;
	char nome[80];
	float notas[3]; // As notas são armazendas em um vetor de tamnho 3
};
main(){

// Declaração da tabela alunos (vetor Aluno)
	struct Aluno alunos[TAM];
	int i, j;
	
	printf("*** Informe os Dados dos Alunos ***");
	
	for(i = 0; i < TAM; i++){
		printf("\n Matricula: ");
		scanf("%d", &alunos[i].matricula);
		getchar();
		printf("\n Aluno: ");
		gets(alunos[i].nome);
		
		for(j = 0; j < 3; j++){ // Leitura das notas do aluno. percorremos outro vetor com for
			printf("Nota %d: ", j + 1);
			scanf("%f", &alunos[i].notas[j]); // O primeiro indice refere-se a tabela e o segundo ao vetor de notas
		}
	}
// Impressão dos dados do aluno
// Calculo da média aritmética de cada aluno
// Calculo da méda da turma
	printf("n\n *** Dados dos Alunos *** \n");
	
	float somaAluno, mediaAluno, somaTurma = 0;
	
	for(i = 0; i < TAM; i++){
		somaAluno = 0;
		
		for(j = 0; j < 3; j++){
			somaAluno += alunos[i].notas[j];
		}
		mediaAluno = somaAluno / 3;
		somaTurma += mediaAluno;
		
		printf("%d - ", alunos[i].matricula);
		printf("%s - ", alunos[i].nome);
		printf("%.1f \n", mediaAluno);
	}
	float mediaTurma = somaTurma / TAM;
	
	printf("\n Media da Turma = %.1f \n\n", mediaTurma);
	
	system("pause");
}
