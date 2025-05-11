#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, resto;
	
	for (i = 10; i <= 50; i++){
		resto = i % 2;
		printf ("\nNúmero %d resto = %d ", i, resto);
	}
	
	system ("pause");
	
	return 0;
}
