/*
PSEUDOCODIGO

programa fatoração;

var
	f,n,temp:inteiro;
	f <- 2;
	temp <- n;
	
inicio

	enquanto (verdade) faça
		escreva “ Fatorar um número em seus primos.”;
		escreva “ Entre com um número natural. (número < 2 sai)”;
		leia(n);
		
		se n < 2 então
			quebre;
		
 		enquanto temp > 1 faca
 			se temp mod f = 0 então
 			
		inicio
			escreva “ “, temp, “ | ”, f;
				temp ? temp div f;
 			fim;
 		senão f ? f + 1;
 		fim-se;
 	fim-enquanto;
 	escreva “ 1 | ”;
 	fim-enquanto;
fim.
*/

#include <stdio.h>

main(){
	
	int n, f, temp;
	f = 2;
	temp = n;
	
	while(1){
		system("cls");
		
		printf("\n \t\t\t Fatorar um numero em seus primos. \n\n");
		printf("\t\t Entre com um numero natural. (numero < 2 sai): ");
		scanf("%d", &n);
		
		if(n < 2)
			break;
		
		while(temp > 1){
			if(temp % f == 0){
				printf("\n %10d | %d", temp, f);
				temp = temp / f;
			}
			else{
			 f = f + 1;
			}
		}
		printf("\n %10d |", 1);
		printf("\n\n");
		system("pause");
	}
}
