/*
algoritmo convertedecbin;

var
	r:vetor[1..64] de inteiros;
	decimal, p, d, b, i, j: inteiro;

inicio
	escreva"Entre com um numero binário: ";
	leia b;
	
	d = b;
	i ? 1;
	
	enquanto d >= 10 faça
		r[i] = d mod 10;
		d ? d div 10;
		i ? i + 1;
	fimenquanto;
	
	r[i] ? d;
	p ? 1;
	decimal ? 0;
	
	para j de 1 até i passo 1 faça
		se r[j] <> 0 então
			decimal ? decimal + p;
		fimse
		
		p ? p * 2;
	fimpara;
	
	escreva"O equivalente decimal de ", b, "=", decimal;
fim;
*/

#include <stdio.h>

main(){
	
	int decimal, p, d, b, i, j, r[64];
	
	printf("\n Entre com um numero binario: \n");
	scanf("%d", &b);
	
	d = b;
	i = 0;
	
	while(d >= 10){
		r[i] = d % 10;
		d = d / 10;
		i++;
	}
	r[i] = d;
	p = i;
	decimal = 0;
	
	for(j = 0; j <= i; j++){
		if(r[j] != 0){
			decimal = decimal + p;
		}
		p = p* 2;
	}
	printf("\n O equivalente decimal de %d = %d", b, decimal);
	printf("\n\n FIM \n\n");
	system("pause");
}
