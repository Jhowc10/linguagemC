#include <stdio.h>
#include <stdlib.h>

main(){
	int *vet[5];
	int v1 = 3, v2 = 5, v3 = 8, v4 = 10, v5 = 15, i;
	vet[1] = &v1;
	vet[2] = &v2;
	vet[3] = &v3;
	vet[4] = &v4;
	vet[5] = &v5;
	
	for(i = 0;i < 5;i++){
		printf("\n Conteudo de vet[% d] = % p \n", i, vet[i]);
	}
	system("pause");
}
