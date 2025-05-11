#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float p, s;
	s = 0;
	
	do {
		printf ("Preco: ");
		scanf ("%f", &p);
		s = s+p;
		
	}while (p != 0);
	
	printf ("Total: %.2f \n", s);
	
	system ("PAUSE");
	
	return 0;
}
