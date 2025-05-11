#include <stdio.h>
#include <stdlib.h>

#define PI 3.1415   // Definição da constante simbólica PI
#define AREA(r) (PI * r * r)     // Definição da macro

main(){
	float raio;
	
	printf("Raio: ");
	scanf("%f", &raio);
	
	float area = AREA(raio);  // Chama a macro
	
	printf("Area = %.2f \n", area);
	
	sustem("pause");
}
