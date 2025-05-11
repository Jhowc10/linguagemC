/*
algoritmo média

var
	n1, n2, n3, media:real;
	op : caracter;
	
inicio
	repita
		escreva "Entre com tres notas";
		leia n1, n2, n3;
	
		media <- (n1 + n2 + n3) / 3;
		escreva "Media = ", m;
	
		escreva "Deseja calcular nova media (s / n)?";
		leia op;
		
	ateque(op <> "s");
fim.
*/

#include <stdio.h>

main(){
	
	float n1, n2, n3, media;
	char op;
	
	do{
		printf("\n Entre com tres notas: \n");
		scanf("%f %f %f", &n1, &n2, &n3);
		
		media = (n1 + n2 + n3) / 3;
		printf("\n A media e %.2f \n", media);
		
		printf("Deseja coalcular uma nova media (s / n)?");
		getchar ();  // Limpa o buffer para não capturar o caracter [enter] digitado anteriormente
		scanf("%c", &op);
		
	}while (op == 's');
	printf("\n\n");
	system ("pause");
}
	
	
	
	
	
	 
	
