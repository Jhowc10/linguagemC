#include <stdio.h>
#include <stdlib.h>

/* Estrutura while(), para repetir somente os numeros positivos, negativos ele encerra*/

int main(int argc, char *argv[]) {
	
	int num, soma;
	soma = 0;
	
	printf ("Digite um numero inteiro:");
	scanf ("%d", &num);
	
	while (num >= 0) {
		
		soma = soma + num;
		printf ("Digite um numero inteiro:");
		scanf ("%d", &num);
		
	}
	
	printf ("Somatorio: %d", soma);
	
	system ("pause");
	
	return 0;
}
