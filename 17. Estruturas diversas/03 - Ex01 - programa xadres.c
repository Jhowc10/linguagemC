/*
algoritimo xadrez;

var
	i . pagamento, dolar:inteiro;
	
inicio
	pagamento <- 0;
	dolar <- 1;
	
	para i de 1 até 64 passo 1 faça
		pagamento <- pagamento + dolar;
		dolar <- dolar * 2;
	fimpara;
	
	escreva "O valor do pagamento = ", pagamento;
fim;
*/

#include <stdio.h>

main(){
	
	int i;
	double pagamento, dolar; // double = é float, dobra a capacidade de armazenamento da variavel, que é so de 32bits, neste caso ela passa para 64 bits.
	pagamento = 0;
	dolar = 1;
	i = 0;
	
	for(i = 1; i <= 64; i++){
		pagamento = pagamento + dolar;
		dolar = dolar * 2;
	}
	printf("\n O valor do pagamento = %.0f \n", pagamento);
	system("pause");
}
