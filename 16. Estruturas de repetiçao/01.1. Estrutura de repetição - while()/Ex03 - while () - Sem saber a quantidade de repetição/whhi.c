#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int x=1, n;
	printf ("Digite o valor final da repetição: ");
	scanf  ("%d", &n);
	
	while (x <= n) {
		printf ("Numero: %d \n", x);
		x++;
	}
		
	system ("pause");
	
	return 0;
}
