#include <stdio.h>
#include <stdlib.h>

struct PonteirosInteiros{
	int *p1, *p2;
};

main(){
	struct PonteirosInteiros ponteiros;   // Declar��o da vari�vel do tipo PoneiroInteiro
	int x = 20, y;

	ponteiros.p1 = &x;  // O campo p1 aponta para o endere�o da vari�vel x
	ponteiros.p2 = &y;  // O campo p2 aponta para o endere�o da cari�vel y
	
	// Atribui��o do valor 30 ao campo p2 de ponteiros
	// Note que para acessar o conte�do do endere�o apontado por 2, temos que colocar o s�mbolo * antes do nome da variavel de estrura
	
	*ponteiros.p2 = 30;
	
	printf("x = % d y = % d \n", x, y);
	printf("Ponteiros p1 = % d p2 = % d \n\n", *ponteiros.p1, * ponteiros.p2);
	
	system("pause");
}
