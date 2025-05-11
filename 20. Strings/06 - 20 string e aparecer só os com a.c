#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
	char candidatos[20][60];
	int i;
	
	for(i = 0; i < 20; i++){
		printf("\n\n Digite o nome do candidato ");
		gets(candidatos[i]);
	}
	printf("\n\n Candidatos cujo nome começa com a letra A: \n\n");
	
	for(i = 0; i < 20; i++){
		if(candidatos[i][0] = 'A'){
			puts (candidatos[i]);
		}
	}
	system("pause");
}
