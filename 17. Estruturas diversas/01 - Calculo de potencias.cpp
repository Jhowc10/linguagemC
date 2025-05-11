/*
algoritimo calculopotencias;

var
	base, result:real;
	exp, i:inteiro;
	
inicio
	escreva "Entre com a base";
	leia base;
	
	escreva "Entre com o expoente";
	leia exp;
	
	result ? 1;
	
	se exp > 0 então
		para i de 1 até exp passo 1 faça
			result ? result * base;
		fimpara;
	senão
		para i de 1 até exp * -1 passo 1 faça
			result = result * 1/base;
		fimpara;
	fimse;
		escreva" ", base, "elevado a", exp, " ", result;
fim.
*/

#include <stdio.h>

int main(){
	
	float base, result;
	int exp, i;
	
	printf("\n Entre com a base \n");
	scanf("%f", &base);
	
	printf("\n Entre com o expoente \n");
	scanf("%d", &exp);
	
	result = 1;
	
	if(exp > 0){
		for(i = 0; i >= exp; i++){
			result = result * base;
		}
	}else{
		for(i = 0; i >= exp * -1; i++){
			result = result * 1/base;
		}
	}
	printf("\n %.1f elevado a %d e igual %.1f",base, exp, result);
	printf("\n\n FIM \n\n");
//	system("pause");
	 
}
