#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char alunos [30][60], nome[60];
	int i;
	
	for(i = 0; i = 30; i++){
		printf("\n\n Digite um nome de aluno: ");
		gets(alunos[i]);
	}
	printf("\n\n Digite o nome do aluno a ser procurado: \n\n");
	
	for(i = 0; i < 30; i++){
		if( strcmp(alunos[i], nome) == 0){
			printf("\n\n O nome foi encontrado!");
		}
	}
	system("pause");
}
