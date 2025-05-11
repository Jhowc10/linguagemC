#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int codigo;
	float preco;
	
	printf ("\n Digite o codigo: ");
	scanf ("%d", &codigo);
	
	printf ("\n Digite o preco: ");
	scanf ("%f", &preco);
	
	switch (codigo) {
		
		case 1:
			printf ("\n Procedencia Sul - Preco: %.2f \n", preco);
			break;
			
		case 2:
			printf ("\n Procedencia Norte - Preco: %.2f \n", preco);
			break;
			
		case 3:
			printf ("\n Procedencia Leste - Preco: %.2f \n", preco);
			break;
			
		case 4:
			printf ("\n Procedencia Oeste - Preco: %.2f \n", preco);
			break;
			
		case 5:
		case 6:
			printf ("\n Procedencia Nordeste - Preco: %.2f \n", preco);
			break;
			
		case 7:
		case 8:
		case 9:
			printf ("\n Procedencia Sudeste - Preco: %.2f \n", preco);
			break;
			
		case 10:
			printf ("\n Procedencia Centro - Oeste - Preco: %.2f \n", preco);
			break;
			
		default:
			printf ("\n Codigo nao encontrado \n", preco);
	}
	
	system ("pause");
	
	return 0;
}
