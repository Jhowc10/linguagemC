#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(int argc, char *argv[]) {
	
	setlocale (LC_ALL, "Portuguese");
	
	int i, resto;
	
	for (i = 10; i <= 50; i++) {
		resto = i % 2;
		
		if (resto == 0) {
			printf ("\n Este n�mero %d � par ", i);
		}else{
			printf ("\n Este n�mero %d � impar", i);
		}
	}
	
	
	system ("pause");
	
	return 0;
}
