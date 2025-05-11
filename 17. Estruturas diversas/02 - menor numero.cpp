/*
algoritimo menornumero;

var
	n, me:inteiro;
	
inicio
	escreva "Entre com um numero";
	leia n;
	
	me ? n;
	
	enquanto (n > 0) faça
		se (n < me) então
			me ? n;
		fimse;
		
		escreva "Entre com um número";
		leia n;
	fimenquanto;
	
	eescreva "Menor número = ", me;
fim.
*/

#include <stdio.h>

main(){
	
	int n, me;
	
	printf("\n Entre com um numero \n");
	scanf("%d", &n);
	
	me = n;
	
	while(n > 0){
		if (n < me){
			me = n;
		}
		printf("\n Entre com um numero \n");
		scanf("%d", &n);
	}
	printf("\n Menor numero = %d", me);
	printf("\n\n FIM \n\n");
} 
