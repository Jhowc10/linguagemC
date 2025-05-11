#include <stdio.h>
#include <stdlib.h>

  /* Estrutura de repetição whle(), quando sabemos o numero de repetições, usamos uma variável para determinar, ex. a variável "cont. */

int main(int argc, char *argv[]) {
	
	int cont = 1; /* Pode declarar aqui, já */
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
