#include <stdio.h>
#include <stdlib.h>

// Definindo uma constante simbolica para o valor ICMS
// Geralmente colocamos em maiuscula, para diferenciar das outras variáveis
#define ICMS 0.18  

main(){
	
	float preco;
	
	printf("Preco: ");
	scanf("%f", &preco);
	
// Calcula o valor do ICMS
	float valorICMS = preco * ICMS;
	
	printf("ICMS = R$ %.2f \n\n", valorICMS);
	system("pause");
}
