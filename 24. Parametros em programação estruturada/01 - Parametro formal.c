#include <stdio.h>
#include <stdlib.h>

int verifica_maior(int a, int b){   // a e b s�o par�metros formais
	if (a > b){
		return(a);
	}else{
		return(b);
	}
}

main(){
	int p = 7, q = 10, maior;
	maior = verifica_maior (p, q);  // p e q s�o par�metros reais.
	
	printf("\n Maior elemento = %d \n", maior);
	system("pause");
}
