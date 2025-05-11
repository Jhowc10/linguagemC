/*
Programa Operação

var
	a, b: real;
	op: char;

inicio

	escreva "Entre com dois numeros: ";
	leia (a,b);
	escreva "Digite o simbolo da operação";
	leia (op);
	
	escolha op
		caso "+": escreva a, "+", b, "=", a+b;
		caso "-": escreva a, "-", b, "=", a-b;
		caso "*": escreva a, "*", b, "=", a*b;
		caso "/": escreva a, "/", b, "=", a/b;
	fimescolha;
fim.
*/

#include <stdio.h>

main(){
	
	float a, b;
	char op;
	
	printf("\n\n\n \t\t\t Operacao aritmetica entre 2 numeros \n\n\n");	
	printf("\t\t Entre com dois numeros A e B \n\n");
	scanf("%f%f", &a, &b);
	
	printf("\n operacoes disponiveis: \n\n");
	printf("\t\t + \n");
	printf("\t\t - \n");
	printf("\t\t * \n");
	printf("\t\t / \n");
	
	printf("\n Digite o simbolo da operacao: ");
	fflush(stdin);
	op = getchar();
	
	switch(op){
		case '+': printf("\n %.2f + %.2f = %.2f \n\n", a, b, a+b);
			break;
		case '-': printf("\n %.2f - %.2f = %.2f \n\n", a, b, a-b);
			break;
		case '*': printf("\n %.2f * %.2f = %.2f \n\n", a, b, a*b);
			break;
		case '/': printf("\n %.2f / %.2f = %.2f \n\n", a, b, a/b);
			break;
		default: printf("\n\n Digite a operacao correta: (+ - * /) \n\n\n");
	}
	system("pause");
}
