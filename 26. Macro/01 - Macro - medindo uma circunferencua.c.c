#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415   // Defini��o da constante simb�lica PI
#define AREA(r) (PI * r * r)     // Defini��o da macro

main(){
	float raio;
	
	printf("Raio: ");
	scanf("%f", &raio);
	
	float area = AREA(raio);  // Chama a macro
	
	printf("Area = %.2f \n", area);
	
	sustem("pause");
}
