#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, novo_salario;
	printf("\n Digite o salario:");
	scanf("%f", &salario);
	
	if (salario <= 2000) {
		novo_salario = salario * 1.30;
		
		printf ("\n Novo salario = %.2f \n", novo_salario);		/*Padrão: %f, porém, quando queremos determinar o numero de casas, fazemos: %.2f */
	}
	
	system ("pause");
	return 0;
}
