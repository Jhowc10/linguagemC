/*
algoritmo contacarac;

var
	x:vetor [1..80] de char;
	i, qtd: inteiro;
	
inicio
	escreva"Entre com seu nome: ";
	leia x;
	
	i ? 1;
	qtd ? 0;
	
	enquanto x[i] <> #0 faça
		se x[i] <> ?? então
			qtd ? qtd + 1;
		fimse;
		i ? i + 1;
	fimenquanto;
	
	escreva" ", x, "tem", qtd, "caracteres sem espaco em branco";
fim;
*/

#include <stdio.h>

main(){
	
	char x[80];
	int i, qtd;
	
	printf("\n Entre com seu nome: ");
	scanf("%[^\n]s", x);
	
	i = 1;
	qtd = 0;
	
	while(x[i] != '\0'){
		if(x[1] != ' '){
			qtd++;
		}
		i++;
	}
	printf("%s tem %d caracteres sem espaco em branco \n", x, qtd);
	system("pause");
}

