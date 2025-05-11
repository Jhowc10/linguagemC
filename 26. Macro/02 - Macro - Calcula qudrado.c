#include <stdio.h>
#include <stdlib.h>

#define quad(n) (n*n)    // Definição da macro / n*n = 5x5, 2x2 - multiplica por ele mesmo

main(){
	int num;
	
	printf("Numero: ");
	scanf("%d", &num);
	
	int quadrado = quad(num);   //Chama a macro
	
	printf("\n Quadrado = %d \n\n", quadrado);
	
	system("pause");
}
