algoritmo sort_3

var
	a, b, c: inteiro;
	
inicio:
	
	escreva "Entre com 3 n�meros";
		leia a, b, c;
	se (a <= b) .E. (b <= c) ent�o
		escreva " ", a, " ", b, " ", c;
	sen�o se (a <= c) .E. (c <= b) ent�o
		escreva " ", a, " ", c, " ", b;
	sen�o se (b <= a) .E. (a <= c) ent�o
		escreva " ", b, " ", a, " ", c;
	sen�o se (b <= c) .E. (c <= a) ent�o
		escreva " ", b, " ", c, " ", a;
	sen�o se (c <= a) .E. (a <= b) ent�o
		escreva " ", c, " ", a, " ", b;
	sen�o
	escreva " ", c, " ", b, " ", a;
	fimse;
fim.
