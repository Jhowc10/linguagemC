/*
convertebindec;

var
	r: vetor[1..64] de char;
	decimal, p d, b, i, j: inteiros;
	
inicio
	escreva"Entre com um numero binario";
	leia r;
	
	i ? 1;
	
	enquanto r[i] <> #0 faça
		i ? i + 1;
	fimenquanto;
	
	p ? 1;
	decimal ? 0;
	
	para j de i -1 até 1 passo -1 faça
		se r[j] <> ?0?  então
			decimal ? decimal + p;
		fimse;
		
		p ? p * 2;
	fimpara;
	escreva"O equivalente decimal de ", b, "=", decimal;
fim;
*/

#include <stdio.h>

main(){


	char r[64];
	int decimal, p, d, b, i, j;
	
	printf("\n Entre com o numero binario \n");
	scanf("%s", r);
	
	i = 1;
	
	while(r[i] != '\0'){
		i++;
	}
	p = 1;
	decimal = 0;
	
	for(j = i -1; j >= 0; j--){
		if(r[j] != '0'){
			decimal = decimal + p;
		}
		p = p * 2;
	}
	printf("\n O equivalente decimal de %s = %d \n", r, decimal);
	system("pause");
}
	
	
