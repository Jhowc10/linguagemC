#include <stdio.h>

main(){
	float x;
	
	printf("\n Entre com um: ");
	scanf("%f", &x);
	
	if(x > 0 && x < 100)
		printf("\n %.0f esta entre 0 e 100 \n", x);
	else
		printf("\n %.0f nao esta entre 0 e 100 \n", x);
	system("pause");
}
