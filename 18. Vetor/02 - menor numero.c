/*
algoritimo menornumero;

var
	i, j:inteiro;
	menor:real;
	n: vetor[1..100] de inteiro;

inicio
	escreva"Entre com alguns números. Digite zero (0) para sair";
	
	i ? 1;
	
	enquanto (1) faça
		escreva"numero", i, ":";
		leia (n[i]);
	
		se n[i] = 0 então
			quebre;
		fimse;
			
		i ? i + 1;
	fimenquanto;
	
	menor = n[1];
	j ? 2;
	
	enquanto (j < i) faça
		se (n[j] < menor) então
			menor ? n[j];
		fimse;
		
		j ? j + 1;
	fimenquanto;
	
	escreva"Menor numero = ", menor;
fim.		
*/

#include <stdio.h>

main(){
	
	int i, j, menor, n[100];
	
	printf("\n Entre com alguns números. Digite (0) para sair.");
	
	i = 0;
	
	while(1){
		printf("\n Numero %d: ", i + 1);
		scanf("%d", &n[1]);
		
		if( n[1] == 0){
			break;
			i++;
		}
	}
	while(j < i){
		if(n[j] < menor){
			menor = n[j];
			j++;
		}
	}
	printf("\n\n O menor numero = %d \n\n", menor);
	system("pause");
}	
