#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, limi, limf;
	
	printf ("\nInforme o n�mero inicial: ");
	scanf  ("%d", &limi);
	
	printf ("\nInforme o n�mero final: ");
	scanf  ("%d", &limf);
	
	for (i = limi; i <= limf; i++) {	
		printf ("%d\n", i);
	}
	system ("pause");
	
	return 0;
}
