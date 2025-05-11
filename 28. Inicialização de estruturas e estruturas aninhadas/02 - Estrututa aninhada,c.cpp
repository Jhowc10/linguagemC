#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura DataHorario
struct DataHorario{
	int dia, mes, ano;
	int hora, minuto;
};
struct Voo{
	char origem[80];
	char destino[80];
	struct DataHorario partida;
	struct DataHorario chegada;
};

main(){
	struct Voo voo;
	
	printf("Cidade de Origem: ");
	gets(voo.origem);	
	
	printf("Cidade de Destino: ");
	gets(voo.destino);
    // .....................
    
	printf("Dia da Partida: ");
	scanf("%d", &voo.partida.dia);	
	
	printf("Mes da Partida: ");
	scanf("%d", &voo.partida.mes);	
	
	printf("Ano da Partida: ");
	scanf("%d", &voo.partida.ano);
	// ...........................
	
	printf("Hora da Partida: ");
	scanf("%d", &voo.partida.hora);
	
	printf("Minutos da Partida: ");
	scanf("%d", &voo.partida.minuto);
	//...............................
	
	printf("Dia da Chegada: ");
	scanf("%d", &voo.chegada.dia);	
	
	printf("Mes da Chegada: ");
	scanf("%d", &voo.chegada.mes);	
	
	printf("Ano da Chegada: ");
	scanf("%d", &voo.chegada.ano);
	// ...........................
	
	printf("Hora da Chegada: ");
	scanf("%d", &voo.chegada.hora);
	
	printf("Minutos da Chegada: ");
	scanf("%d", &voo.chegada.minuto);
	//...............................
	
// Impressão dos dados 
	printf("\n ***Dados do voo*** \n");
	printf("Cidade de Origem: %s \n", voo.origem);
	printf("Cidade de Destino: %s \n", voo.destino);
	
	printf("Data/Hora da partida: %d/%d/%d - %d:%d \n", voo.partida.dia, voo.partida.mes, voo.partida.ano, voo.partida.hora, voo.partida.minuto);
	printf("Data/Hora da chegada: %d/%d/%d - %d:%d \n", voo.chegada.dia, voo.chegada.mes, voo.chegada.ano, voo.chegada.hora, voo.chegada.minuto);
	
	system("pause");
}
