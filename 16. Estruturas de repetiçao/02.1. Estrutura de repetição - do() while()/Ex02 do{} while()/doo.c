#include <stdio.h>
#include <stdlib.h>

/* neste ex., � feita a leitura da vari�vel x por cinco vezes e, em seguida, � feita a multiplica��o de x por 3, colocando�a na vari�vel de resposta r, que � exibida a cada vez. */

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
