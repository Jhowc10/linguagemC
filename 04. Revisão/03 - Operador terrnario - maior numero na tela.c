#include <stdio.h>
#include <stdlib.h>

main(){
	
	int num1, num2, maior;
	
	printf("Primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Segundo numero: ");
	scanf("%d", &num2);
	
// Verifica qual o maior n�mero e atribui a variavel maior
// Para isso usamos o operador tern�rio
	maior = num1 > num2 ? num1 : num2;
	
	printf("Maior = %d \n\n", maior);
	system("pause");
}
