#include <stdio.h>
#include <stdlib.h>

main(){
	int x = 25;
	int *px, **Ppx;
	px = &x;
	Ppx = &px;
	
	printf("Conteudo da variavel x por meio do ponteiro Ppx = %d \n", **Ppx);
	system("PAUSE");
}
