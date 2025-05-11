#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

	
	char tamanho;
	
	printf ("\nDigite o tamanho [G,M ou P] ");
	scanf  ("%c", &tamanho);
	
	if (tamanho == 'g' || tamanho == 'G') {
		printf ("\nwww.tamanhog.com.br \n\n");
	}else if (tamanho == 'm' || tamanho == 'M') {
		printf ("\nwww.tamanhom.com.br \n\n");
	}else if (tamanho == 'p' || tamanho == 'P') {
		printf ("\nwww.tamanhop.com.br \n\n");
	}else{
		printf ("\nDigite somente G ou M \n\n");
	}
	
	system ("pause");
	
	return 0;
}
