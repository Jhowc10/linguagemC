#include <stdio.h>
#include <stdlib.h>

main(){
	
	float salario;
	
	printf ("Salario: ");
	scanf("%f", &salario);
	
// Calculo do novo salário usando o operador ternário de decisão
	salario = salario < 1000 ? salario * 1.15 : salario * 1.07;
	
// Apresenta o novo salário
	printf("Novo salario = %.2f \n\n", salario);
	system("pause");
}
