#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char palavra[20];
	int i;
	
	printf("*** Digite a string *** \n");
	gets(palavra);
// Laço para percorrer a string
	while(palavra[i] != '\0'){
		printf("\n %c", palavra[i]);
		i++;
	}
	system("pause");
}

