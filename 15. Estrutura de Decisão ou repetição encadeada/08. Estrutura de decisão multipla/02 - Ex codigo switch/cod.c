/*
PSEUDOCÓDIGO

programa cacoroa

var
	i: inteiro
	
inicio
	escreva "Cara ou Coroa?";
	escreva "1. Cara";
	escreva "2. Coroa";
	escreva "Entre com a opção:";
	
	leia(i);
	
	escolha i;
		caso 1: escreva "Você escolheu cara";
		caso 2: escreva "Você escolheu coroa";
	fimescolha;
fim.
*/

#include <stdio.h>
// \n = pula linha...  \t = da um espaço
main(){
	
	int i;
	
	printf("\n\n\n \t\t\t \"Cara\" ou \"Coroa\"? \n\n\n");
	printf("\t\t 1. Cara \n");
	printf("\t\t 2. Coroa \n");
	
	printf("\n\n\n \t\t\t Selecione a opcao: ");
	scanf("%d", &i);
	
	switch(i){
		case 1: printf("\n Voce escolheu cara \n");
			break;
		case 2: printf("\n Voce escolheu coroa \n");
			break;
		default: printf("\n entre com 1 ou 2 apenas \n");
	}
	system("pause");	
}
