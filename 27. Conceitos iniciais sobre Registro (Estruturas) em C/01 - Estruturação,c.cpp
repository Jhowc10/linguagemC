#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura data
struct Data{
	int dia, mes, ano;
};

main(){
	
// Declaração de uma variável da estrutura
// Estrutura    nome da estrutura   variavel
    struct            Data          umaData;
    printf("Dia: ");
    scanf("%d", &umaData.dia); // Armazena na variavel da estrutura "dia"
    	
    printf("Mes: ");
    scanf("%d", &umaData.mes);  // Armazena na variavel da estrutura "mes"
    	
    printf("Ano: ");
    scanf("%d", &umaData.ano);  // Armazena na variavel da estrutura "ano"

// Impressão da data informada
	printf("\n *** Data Informada ***\n");
	printf("\n Dia %d do %d de %d \n\n", umaData.dia, umaData.mes, umaData.ano);
	
	system("pause");
}
