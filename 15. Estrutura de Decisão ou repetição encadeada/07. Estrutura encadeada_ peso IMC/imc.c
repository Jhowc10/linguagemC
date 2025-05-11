#include <stdio.h>

main(){
	float imc, peso, altura;
	
	printf("\n\n\t\t Calculo do IMC - (indice de massa corporea)\n\n\n");
	printf("\n Digite seu peso \n");
	scanf("%f", &peso);
	printf("\n Entre com sua altura \n");
	scanf("%f", &altura);
	
	imc = peso / (altura * altura);
	
	if(imc < 18.5)
		printf("\n Voce esta abaixo do peso ideal. IMC=%.2f \n", imc);
			else if(imc >= 18.5 && imc < 25)
			printf("\n Parabens!!! Voce esta normal.IMC=%.2f \n", imc);
				else if(imc >=25 && imc < 30)
				printf("\n Voce esta com sobrepeso.IMC=%.2f \n", imc);
					if(imc >=30 && imc <35)				
					printf("\n Voce esta obeso.IMC=%.2f \n", imc);
				else
					printf("\n Voce esta com obesidade morbida.IMC=%.2f \n", imc);
	system("pause");
}
