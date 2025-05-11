#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	char tamanho; /*Variavel vai fora do laço */
	
	do{   /* No caso de criar ul laço de repetição no "switch case", utilize o "do while", colocando o do{ no inicio e o "switch vai no bloco. */
	
		fflush (stdin);	/* Comando para evitar que fique repetindo várias vezes. */
		printf ("\nDigite o tamanho [P, M ou G para tamanhos e F para finalizar]");
		scanf  ("%c", &tamanho);
			
			switch (tamanho) {
				case 'P':
				case 'p':
					printf ("\nwww.tamanhop.com.br \n");
				break;
		
				case 'M':	
				case 'm':
					printf ("\nwww.tamanhom.com.br \n");
				break;	
			
				case 'G':	
				case 'g':
					printf ("\nwww.tamanhog.com.br \n");
				break;
			
				case 'F':       /* Ao usar o "do while, acresentamos este case para por fim no laço */
				case 'f':
					printf ("\n Finalizando... \n\n");
				break;
		
				default:
					printf ("\nDigite somente P, M ou G \n\n");
				break;
			}
		
	} while (tamanho != 'F' && tamanho != 'f');   /* No final do bloco, o while vem com a logica */
	
	
	system ("pause");
	return 0;
}
