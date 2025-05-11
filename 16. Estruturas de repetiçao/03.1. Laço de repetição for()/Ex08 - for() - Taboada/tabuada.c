#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int i, num;
	
	printf ("\nDigite a tabuada: ");
	scanf  ("%d", &num);
	
	for (i=1; i<=10; i++) {
		printf ("\n %d x %d = %d ", i, num, i*num);
	}
	
	system ("pause");
	
	return 0;
}
