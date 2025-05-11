#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char tamanho;
	
		do {
			
			printf ("\nDigite o tamanho [ G, M ou P] e F para finalizar: ");
			fflush (stdin);  /* Obs que se usa este comando duas vezes, no "do while" e no "wuile" */
			scanf  ("%c", &tamanho);
			
			while (tamanho != 'G' && tamanho != 'M' && tamanho != 'P' && tamanho != 'F') {
				fflush (stdin);
				printf ("\nDigite NOVAMENTE o tamanho [G M P] F para finalizar: ");
				scanf  ("%c", &tamanho);
			}
			
			if (tamanho == 'g' || tamanho == 'G') {
				printf ("\nwww.tamanhog.com.br \n\n");
				
			}else if (tamanho == 'm' || tamanho == 'M') {
				printf ("\nwww.tamanhom.com.br \n\n");
				
			}else if (tamanho == 'p' || tamanho == 'P') {
				printf ("\nwww.tamanhop.com.br \n\n");
				
			}else{
				printf ("\nFinalizando....\n\n");
				
			}
			
		} 
		while (tamanho != 'f' && tamanho != 'F');
		
	system ("pause");
	
	return 0;
}
