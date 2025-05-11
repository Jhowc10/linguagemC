#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int cont;
	float n1, n2, n3, m;
	
	for (cont = 1; cont <= 5; cont++) {
		printf ("Digite 3 notas \n");
		scanf ("%f%f%f", &n1, &n2, &n3);
		m = (n1 + n2 + n3) / 3;
		printf ("Media: %.2f \n", m);
	}
	
	system ("pause");
	
	return 0;
}
