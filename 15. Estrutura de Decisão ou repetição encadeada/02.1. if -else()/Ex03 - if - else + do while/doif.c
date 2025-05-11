#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char tamanho;
	
	do{
	
		fflush (stdin);
		printf ("\nDigite o tamanho [G,M ou P e F para finalizar]: ");
		scanf  ("%c", &tamanho);
	
			if (tamanho == 'g' || tamanho == 'G') {
				printf ("\nwww.tamanhog.com.br \n\n");
				
			}else if (tamanho == 'm' || tamanho == 'M') {
				printf ("\nwww.tamanhom.com.br \n\n");
				
			}else if (tamanho == 'p' || tamanho == 'P') {
				printf ("\nwww.tamanhop.com.br \n\n");
				
			}else if (tamanho == 'F' || tamanho == 'f') {
				printf ("\nFinalizando.... \n\n");
				
			}else{
				printf ("\nDigite somente G, M, P ou F \n\n");
			}
	
	} while (tamanho != 'F' && tamanho != 'f');
			
	system ("pause");
	
	return 0;
}
