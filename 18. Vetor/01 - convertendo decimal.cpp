/*
algoritimo convertedecbin;

var
	d,i j, n;inteiro;
	restos: vetor[1..64] de inteiros
	
inicio
	escreva "Entre com um número decimal";
	leia n;
	
	d ? n;
	i ? 1;
	
	enquanto d >= 2 faça
		restos[i] ? d mod 2;
		d ? d div 2;
		i ? i + 1;
	fimenquanto;
	
	restos[i] ? d;
	escreva" ", n decimal em binário," = ";
	
	para j de i ate 1 passo -1 faça
		escreva" ", restos[j];
	fimpara;
fim.
*/

#include <stdio.h>

main(){
	
	int d, i, j, n, restos[64];
	
	printf("\n Entre com um numero decimal: \n");
	scanf("%d", &n);
	
	d = n;
	i = 1;
	
	while(d >= 2){
		restos[i] = d % 2;
		d = d / 2;
		i++;
	}
	restos[i] = d;
	printf("\n %d, decimal em binario = \n", n);
	
	for(j = i; j >= 0; j--){
		printf("%d \n", restos[j]);
	}
	printf("\n\n FIM \n\n");
//	system("pause");
}
