#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	float salario, novo_salario;
	printf("\n Digite o salario:");
	scanf("%f", &salario);
	
	if (salario <= 2000) {
		novo_salario = salario * 1.30;
	}else{
		novo_salario = salario * 1.10;
	}
	
	printf ("\n Novo salario: %.2f \n", novo_salario);
	
	system ("pause");
	
	return 0;
}
