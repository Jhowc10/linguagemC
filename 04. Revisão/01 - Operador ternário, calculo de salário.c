#include <stdio.h>
#include <stdlib.h>

main(){
	
	float salario;
	
	printf ("Salario: ");
	scanf("%f", &salario);
	
// Calculo do novo sal�rio usando o operador tern�rio de decis�o
	salario = salario < 1000 ? salario * 1.15 : salario * 1.07;
	
// Apresenta o novo sal�rio
	printf("Novo salario = %.2f \n\n", salario);
	system("pause");
}
