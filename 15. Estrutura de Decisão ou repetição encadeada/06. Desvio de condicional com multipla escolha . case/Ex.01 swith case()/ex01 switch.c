#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int codigo;
	
	printf ("\n Digite o codigo:");
	scanf ("%d", &codigo);
	
	switch (codigo) {
		
		case 001:
			printf ("\n Caderno \n");
			break;
			
		case 002:
			printf ("\n Lapis \n");
			break;
			
		case 003:
			printf ("\n Borracha \n");
			break;
			
		default:
			printf ("\n Codigo nao encontrado \n");		
	}	
	
	system ("pause");
	return 0;
}
