#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char palavra[15];
	int i, tam;
	
	printf("*** Digite a string *** \n");
	gets(palavra);
	
	tam = strlen(palavra);  // tam irá armazenar o tamanho da string
	
	for(i = 0; i < tam; i++){
		if(palavra[i] == 'a'){
			palavra[i] = 'i';
		}
	}
	puts(palavra);
	system("pause");
}
