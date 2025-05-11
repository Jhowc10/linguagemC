#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definição da union
union dados_aluno{
	char nome[40];
	float nota;
	int faltas;
};

main(){
	// Declaraqção de uma variavel da union
	union dados_aluno alunos_uninove;
	
	printf("\n Digite o nome do aluno = ");
	gets(alunos_uninove.nome);
	
	printf("\n Nome do aluno = ");
	puts(alunos_uninove.nome);
	
	printf("Digite a nota do aluno = ");
	scanf("% f", &alunos_uninove.nota);
	printf("\n Nota do aluno = % f", alunos_uninove.nota);
	
	printf("\n Digite as faltas do aluno = ");
	scanf("% d", &alunos_uninove.faltas);
	printf("\n Faltas do aluno = % d \n", alunos_uninove.faltas);
	
	system("pause");
}
