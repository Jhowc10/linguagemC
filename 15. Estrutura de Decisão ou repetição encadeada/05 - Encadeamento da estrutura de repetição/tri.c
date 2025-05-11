#include <stdio.h>

main(){
	float bc, ac, ab, a, b, c;
	
	printf("Entre com os tres lados do triangulo: ");
	scanf("%f %f %f", &a, &b, &c);
	
	bc = b - c;
	if(bc < 0)
		bc = bc* -1;
		
	ac = a - c;
	if(ac < 0)
		ac = ac* -1;
	
	
	ab = a-b;
	if(ab < 0)
		ab = ab* -1;
	
	if((bc < a && a < b+c) && (ac < b && b < a+c) && (ab < c && b < a+c))
		if(a == b  && b == c)
			printf("\n Triangulo Equilatero \n");
		else
			if ((a == b) || (b == c) || (c == a))
				printf("\n Triangulo Isosceles \n");
			else
				printf("\n Triangulo Escaleno \n");
	else
		printf("\n Estes valores não são de um triangulo \n");
	system("pause");
	
}
