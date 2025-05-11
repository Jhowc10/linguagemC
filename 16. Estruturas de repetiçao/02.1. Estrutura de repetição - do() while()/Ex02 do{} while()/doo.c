#include <stdio.h>
#include <stdlib.h>

/* neste ex., é feita a leitura da variável x por cinco vezes e, em seguida, é feita a multiplicação de x por 3, colocando­a na variável de resposta r, que é exibida a cada vez. */

int main(int argc, char *argv[]) {
	
	int x, r, cont = 1;
	
	do {
		printf ("Digite o valor de x: \n");
		scanf ("%d", &x);
		r = x * 3;
		printf ("R: %d \n", r);
		cont = cont + 1;
		
	} while (cont <= 5);
	
	system ("pause");
	
	return 0;
}
