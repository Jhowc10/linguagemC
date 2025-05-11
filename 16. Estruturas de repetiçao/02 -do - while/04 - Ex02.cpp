/*
algoritimo calculandomedia2;

var
	n1, n2, m:real;
	
inicio
	repita
		escreva "Entre com a primeira nota: ";
		leia nota1;
	
	ateque (n1 >= 0 .E. n1 <= 10);
	
	repita
		escreva "Entre com a segunda nota: ";
		leia n2;
		
	ateque (n2 >= 0 .E. n2 <= 10);
	m <- (n1 + n2) / 2;
	
	escreva "Media = ", m;
fim.
*/

#include <stdio.h>

main(){
	float n1, n2, m;
	
	do{
		printf("\n Entre com a primeira nota: \n");
		scanf("%f", &n1);
	
	}while(n1 < 0 && n1 > 10);
	
	do{
		printf("\n Entre com a segunda nota: ");
		scanf("%f", n2);
		
	}while (n2 < 0 && n2 > 10);
	
	m = (n1 + n2) / 2;
	printf("\n Media = %.2f \n\n", m);
//	system("pause");
}
	
