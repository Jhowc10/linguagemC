// PSEUDOCÓDIGO

/* algoritmo raças;

var
	op: inteiro;
	
inicio
	escreva: "1. Mongoloide";
	escreva: "2. Caucasoide";
	escreva: "3. Negroide";
	escreva: "4. Austraqloide";
	escreva: "5. Capoide";
	escreva: "Entre com a opção para ver seu significado: ";
	
	leia op;
	
	escolha (op);
		caso 1: escreva: "(raça amarela): povos do leste e sudeste asiático, Oceania (malaios e polinésios) e continente americano (esquimós e ameríndios).""	
		caso 2: escreva "(raça branca): povos de todo o continente europeu, norte da África e parte do continente asiático (Oriente Médio e norte do Subcontinente Indiano). ";
		caso 3: escreva "(raça negra): povos da África Subsaariana ";
		caso 4: escreva "sul da Índia (drávidas), negritos das Ilhas Andaman (Oceano Índico), negritos das Filipinas, aborígenes de Papua-Nova Guiné, aborígenes da Austrália e povos melanésios da Oceania. ";
		caso 5: escreva "tribos Khoisan (extremo sul do continente africano)."; 
	fimescolha;
fim.
*/	

// Programa em linguagem c

#include <stdio.h>

main(){
	int op;
	
	printf("\n\n\n \t\t\t Meunu Racas \n\n\n");
	printf("\t\t 1. Mongoloide \n");
	printf("\t\t 2. Caucasoide \n");
	printf("\t\t 3. Negroide \n");
	printf("\t\t 4. Australoide \n");
	printf("\t\t 5. Capoide \n");
	
	printf("\n Entre com a opcao para ver o seu significado: ");
	scanf("%d", &op);
	
	switch(op){
		case 1: printf("\n (raça amarela): povos do leste e sudeste asiático, Oceania (malaios e polinésios) e continente americano (esquimós e ameríndios).\n\n\n\n");
			break;
		case 2: printf("\n (raça branca): povos de todo o continente europeu, norte da África e parte do continente asiático (Oriente Médio e norte do Subcontinente Indiano).\n\n\n\n");
			break;
		case 3: printf("(raça negra): povos da África Subsaariana \n\n\n\n");
			break;
		case 4: printf("sul da Índia (drávidas), negritos das Ilhas Andaman (Oceano Índico), negritos das Filipinas, aborígenes de Papua-Nova Guiné, aborígenes da Austrália e povos melanésios da Oceania. \n\n\n\n");
			break;
		case 5: printf("tribos Khoisan (extremo sul do continente africano). \n\n\n\n"); 
			break;
		defaulf: printf("\n Digitou a opcao errada. \n\n");
	}
	system("pause");
}
