#include <stdio.h>
#include <stdLib.h>

void dobro(int *n){
	*n = 2 *(*n);
	printf("\n Valor de n = %d", *n);
}

main(){
	int n = 8;
	dobro(&n);
	printf("\n Valor de n = %d \n", n);
	system("pause");
}
