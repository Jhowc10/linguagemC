#include <stdio.h>
#include <stdlib.h>

  /* Estrutura de repeti��o whle(), quando sabemos o numero de repeti��es, usamos uma vari�vel para determinar, ex. a vari�vel "cont. */

int main(int argc, char *argv[]) {
	
	int cont = 1; /* Pode declarar aqui, j� */
	float n1, n2, n3, m;
//	cont = 1; Ou pode clarar aqui.
	
	while (cont <= 10){
	
	
		printf ("Digite 3 notas \n");
		scanf ("%f%f%f",&n1, &n2, &n3 );
		m = (n1 + n2 + n3) /3;
		printf ("Media: %.2f \n", m);
		cont = cont + 1;
		
	}	
	
	system ("pause");
	
	return 0;
}
