#include <stdio.h>

int main(int argc, char *argv[]) {
	
	int cont, n, soma;
	soma = 0;
	printf ("Digite o valor de n: \n");
	scanf ("%d", &n);
	
	for (cont = 1; cont <= n; cont++) {
		soma = soma + cont;
	}
	
	printf ("Somatorio: %d \n", soma);
	
	system ("pause");
	
	return 0;
}
