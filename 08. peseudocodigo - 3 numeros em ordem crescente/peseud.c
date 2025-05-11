algoritmo sort_3

var
	a, b, c: inteiro;
	
inicio:
	
	escreva "Entre com 3 números";
		leia a, b, c;
	se (a <= b) .E. (b <= c) então
		escreva " ", a, " ", b, " ", c;
	senão se (a <= c) .E. (c <= b) então
		escreva " ", a, " ", c, " ", b;
	senão se (b <= a) .E. (a <= c) então
		escreva " ", b, " ", a, " ", c;
	senão se (b <= c) .E. (c <= a) então
		escreva " ", b, " ", c, " ", a;
	senão se (c <= a) .E. (a <= b) então
		escreva " ", c, " ", a, " ", b;
	senão
	escreva " ", c, " ", b, " ", a;
	fimse;
fim.
