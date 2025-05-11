#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int div, r, n;
	div = 2;
	
	while (div <= 3) {
		
		for (n = 1; n <= 6; n++) {
			r = n % div;
			
			if (r == 0) {
				printf ("\n Divisivel por %d: %d \n", div, n);
			}
			
		}
		div = div + 1;
	}
	
	system ("pause");
	
	return 0;
}
