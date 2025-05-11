#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int i, resto;
	
	for (i = 0; i <= 20; i++) {
		resto = i % 2;
		
		if (resto == 1) {
			printf ("Numeros %d impares: \n", i);
		}
	}
	
	
	system ("pause");
	
	return 0;
}
