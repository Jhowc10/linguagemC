#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float salario, novo_salario;
	
	printf ("\n Digite o salario:");
	scanf ("%f", &salario);
	
	if (salario < 500) {
		novo_salario = salario * 1.15;       /* 15% */
	}else{
		if (salario <= 1000) {
			novo_salario = salario * 1.10;   /* 10% */
		}else{
			novo_salario = salario * 1.05;   /* 5% */
		}
	}
	
	printf ("\n Novo salario: %.2f \n", novo_salario);
	
	system ("pause");
	
	return 0;
}
