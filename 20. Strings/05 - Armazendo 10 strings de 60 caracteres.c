#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char alunos[10][60];
	int i;
	
	for(i = 0; i < 10; i++){
		printf("\n\n Digite um nome de aluno: ");
		gets(alunos[i]);
	}
	printf("\n\n Aluno da turma: \n\n");
	
	for(i = 0; i < 10; i++){
		puts(alunos[i]);		
	}
	system("pause");
}
