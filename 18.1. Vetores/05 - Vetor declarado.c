#include <stdio.h>
#include <stdlib.h>

main(){
	
// Declaração e inicialização do vetor de cedulas
	int cedulas[3] = {50, 20, 10};
// Vetor que armazena a quantidade de cada cedula
	int quantidade[3];
	int i, quantia;
	
	printf("Quantia: ");
	scanf("%d", &quantia);

//Verifica se o valor da quantia é multiplo de 10
	if(quantia % 10 != 0){
		printf("O valor deve ser multiplo de 10! \n");
	}else{
		for(i = 0; i < 3; i++){  // Calcula a quantia de cada cedula
			quantidade[i] = quantia / cedulas[i];
			quantia %= cedulas[i];
		}
// apresenta a quantidade de cada cedula na tela
		for(i = 0; i < 3; i++){
			printf("R$ %d = %d \n", cedulas[i], quantidade[i]);
		}
	}
	system("pause");
	
}
