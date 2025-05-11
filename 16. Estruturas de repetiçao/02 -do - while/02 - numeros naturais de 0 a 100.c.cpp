/*
algoritimo naturais;

var
	i:inteiro;
	
inicio
	escreva "A serie dos naturais de 0 a 100";
	i ? 0
	
	repita{
		escreva(" ", i);
		i ? i + 1
	}ateque (i <= 100);
fim.	
*/

#include <stdio.h>

main(){
	
	int i;
	
	printf("\n A serie natural de 0 a 100 \n\n");
	i = 0;
	
	do{
		printf("%d", i);
		i++;
	}while(i <= 100);
	
	printf("\n\n FIM \n\n");
	
	system("pause");
}
