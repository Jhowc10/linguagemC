// PSEUDOC�DIGO

/* algoritmo ra�as;

var
	op: inteiro;
	
inicio
	escreva: "1. Mongoloide";
	escreva: "2. Caucasoide";
	escreva: "3. Negroide";
	escreva: "4. Austraqloide";
	escreva: "5. Capoide";
	escreva: "Entre com a op��o para ver seu significado: ";
	
	leia op;
	
	escolha (op);
		caso 1: escreva: "(ra�a amarela): povos do leste e sudeste asi�tico, Oceania (malaios e polin�sios) e continente americano (esquim�s e amer�ndios).""	
		caso 2: escreva "(ra�a branca): povos de todo o continente europeu, norte da �frica e parte do continente asi�tico (Oriente M�dio e norte do Subcontinente Indiano). ";
		caso 3: escreva "(ra�a negra): povos da �frica Subsaariana ";
		caso 4: escreva "sul da �ndia (dr�vidas), negritos das Ilhas Andaman (Oceano �ndico), negritos das Filipinas, abor�genes de Papua-Nova Guin�, abor�genes da Austr�lia e povos melan�sios da Oceania. ";
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
		case 1: printf("\n (ra�a amarela): povos do leste e sudeste asi�tico, Oceania (malaios e polin�sios) e continente americano (esquim�s e amer�ndios).\n\n\n\n");
			break;
		case 2: printf("\n (ra�a branca): povos de todo o continente europeu, norte da �frica e parte do continente asi�tico (Oriente M�dio e norte do Subcontinente Indiano).\n\n\n\n");
			break;
		case 3: printf("(ra�a negra): povos da �frica Subsaariana \n\n\n\n");
			break;
		case 4: printf("sul da �ndia (dr�vidas), negritos das Ilhas Andaman (Oceano �ndico), negritos das Filipinas, abor�genes de Papua-Nova Guin�, abor�genes da Austr�lia e povos melan�sios da Oceania. \n\n\n\n");
			break;
		case 5: printf("tribos Khoisan (extremo sul do continente africano). \n\n\n\n"); 
			break;
		defaulf: printf("\n Digitou a opcao errada. \n\n");
	}
	system("pause");
}
