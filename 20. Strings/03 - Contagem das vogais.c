#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(){
	char palavra [30];
	int i = 0, qtde = 0;
	
	printf("*** Digite a string *** \n");
	gets(palavra);
	
	while(palavra[i] != '\0'){
		if(palavra [i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
			qtde++;
		}
		i++;
	}
	printf("\n A quantidade de vogais da palavra e =%d \n", qtde);
	system("pause");
}
