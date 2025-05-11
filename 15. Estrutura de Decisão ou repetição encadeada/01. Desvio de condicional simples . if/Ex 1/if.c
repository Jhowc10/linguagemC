#include <stdio.h>
#include <stdlib.h>

                                    /* ESTRUTURAA DE DECISÃO SIMPLES
                                    
										   int x;	
									       if (x != 0) {
										      res = x + 5;
											  printf ("Resultado = %d", res); } */

int main(int argc, char *argv[]) {
	
	int a, b, x;
	printf ("\n Digite os valores de a e b:");
	scanf ("%d%d", &a, &b);
	x = a + b;
	
	if (x > 10);
		printf ("\n Valor de x: %d \n", x);
		
		system ("pause");
		
	return 0;
}
