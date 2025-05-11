#include <stdio.h>

main(){
	
	int op;
	
	printf("\n Um copo contem um casal de minhocas tiberianas. As minhocas reproduzem-se e o seu numero dobra todos os dias.\
 			Em 50 dias o copo esta cheio, em que dia o copo esteve meio cheio? \n\n");
 	printf("\t\t 1. 25 \t");
 	printf("\t\t 2. 24 \t");
 	printf("\t\t 3. 26 \t");
 	printf("\t\t 4. 49 \t \n");
 	printf("\n Entre com a opcao: ");
 	scanf("%d", &op);
 	
 	switch(op){
 		case 1: printf("\n errou \n\n");
 			break;
 		case 2: printf("\n errou \n\n");
 			break;
 		case 3: printf("\n errou \n\n");
 			break;
 		case 4: printf("\n acertou \n\n");
 			break;
 		default: printf("\n Entrou com a opcao errada \n\n");
 			break;
	 }
	 system("pause");
}	
