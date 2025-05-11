#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int x = 5, y = 1;                  
	
	while (x >= 1) {        /* Ordem decrescente */
		printf("Numero: %d \n", x);
		x--;
	}
	
	printf ("\n\n");
	
	while (y <= 5) {      /* Ordem crescente */
		printf ("Numero: %d \n", y);    
		y++;
	} 
	
	system ("pause");
	
	return 0;
}
