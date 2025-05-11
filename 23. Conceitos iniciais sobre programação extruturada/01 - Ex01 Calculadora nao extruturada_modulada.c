#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int opcao = 0;
	float A, B, R;
	
	while(opcao != 5){
		system("cls");
		printf("\n 1 - adicao");
		printf("\n 2 - subtracao");
		printf("\n 3 - multiplicacao");
		printf("\n 4 - divisao");
		printf("\n 5 - sair");
		printf("\n\n - Escolha um numero: ");
		scanf("%d", &opcao);
		
		switch(opcao){
			case 1:
				{
					printf("\n Digite o primeiro numero: ");
					scanf("%f", &A);
					
					printf("\nDigite o segundo numero: ");
					scanf("%f", &B);
					
					R = A + B;
					printf("\n\n O resultado e = %0.2f", R);
					getch();
					break;
				}					
			case 2: 
				{
					printf("\n Digite o primeiro numero: ");
					scanf("%f", &A);
					
					printf("\nDigite o segundo numero: ");
					scanf("%f", &B);
					
					R = A - B;
					printf("\n\n O resultado e = %0.2f", R);
					getch();
					break;
				}
			case 3: 
				{
					printf("\n Digite o primeiro numero: ");
					scanf("%f", &A);
					
					printf("\nDigite o segundo numero: ");
					scanf("%f", &B);
					
					R = A * B;
					printf("\n\n O resultado e = %0.2f", R);
					getch();
					break;
				}
			case 4: 
				{
					printf("\n Digite o primeiro numero: ");
					scanf("%f", &A);
					
					printf("\nDigite o segundo numero: ");
					scanf("%f", &B);
					
					R = A / B;
					printf("\n\n O resultado e = %0.2f", R);
					getch();
					break;
				}
			default:
				printf("\n Esta operacao nao existe");
		}
	}
	system("PAUSE");
}

