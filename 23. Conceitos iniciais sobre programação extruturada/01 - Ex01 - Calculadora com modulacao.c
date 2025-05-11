#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


float A, B, R;

void Entrada(){
	printf("\n Digite o primeiro numero: ");
	scanf("%f", &A);
	
	printf("\n Digite o segundo numero ");
	scanf("%f", &B);
}
float Adicao(){
	R = A + B;
	return(R);
}
float Subtracao(){
	R = A - B;
	return(R);
}
float Multiplicacao(){
	R = A * B;
	return(R);
}
float Divisao(){
	R = A / B;
	return(R);
}
// Podemos declarar o procedimento e a função depois do conteudo do main, ates de fechar a tag main

main(){
	int opcao = 0;
	float result;
	
	while(opcao != 5){
		system("cls");
		printf("\n 1 - adicao");
		printf("\n 2 - subtracao");
		printf("\n 3 - multiplicaçao");
		printf("\n 4 - divisao");
		printf("\n 5 - sair");
		printf("\n\n Escolha um numero: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:{
				Entrada(); // Chama o procedimento void
				result = Adicao();  // Chama a função adição
				printf("\n A + B = %f", result);
				break;
			}
			case 2:{
				Entrada();
				result = Subtracao();
				printf("\n A - B = %f", result);
				break;
			}
			case 3:{
				Entrada();
				result = Multiplicacao();
				printf("\n A * B = %f", result);
				break;
			}
			case 4:{
				Entrada();
				result = Divisao();
				printf("\n A / B = %.1f", result);
				break;
			}
			default:
				printf("\n Esta operacao nao existe");
		}
	}
	system("PAUSE");
}
