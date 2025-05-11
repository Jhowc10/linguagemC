#include <stdio.h>

main(){
	
	float a, b, c, d;
	
	printf("Entre com 4 lados: ");
	scanf("%f %f %f %f", &a, &b, &c, &d);
	
	if(a == b && b == c && c == d)
		printf("\n Quadrado \n");
	else if (a == c && b == d)
		printf("\n Retangulo \n");
	else if(a == b && c == d)
		printf("\n Retangulo \n");
	else if(a == d && b == c)
		printf("\n Retangulo \n");
	else
		printf("\n Figura não reconhecida \n");
	system("pause");
}
