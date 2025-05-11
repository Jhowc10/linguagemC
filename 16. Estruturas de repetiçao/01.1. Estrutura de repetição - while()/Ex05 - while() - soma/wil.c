#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int x=1, n, a, soma=0;
	
	printf ("Digite quantos números deseja somar: ");
	scanf  ("%d", &n);
	
	while (x <= n) {
		printf(" Numero: %d:", x);
		scanf ("%d", &a);
		soma = soma + a;
		x++;
	}
	
	printf ("\nValor total da soma = %d \n", soma);
	
	
	system ("pause");
	
	return 0;
}
