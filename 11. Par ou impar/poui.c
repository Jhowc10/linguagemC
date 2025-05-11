#include <stdio.h>

main(){
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	
	if(x % 2 == 0)
		printf("\n O numero %d e par \n", x);
	else
		printf("\n O numero %d e impar \n", x);
	system("pause");
}
