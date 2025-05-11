algoritmo paridade;

var
	x: inteiro
	
inicio
	escreva: "Entre com um número: ";
		leia x;
	se x mod 2 = 0 então
		escreva " ", x, "é par";
	senão
		escreva " ", x, "é impar";
	fimse;
fim.
