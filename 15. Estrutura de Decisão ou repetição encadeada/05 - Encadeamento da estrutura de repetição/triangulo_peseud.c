programa triangulo;

var
	bc, ac, ab, a, b, c: real;
	
inicio
	escreva "Entre com três lados do triângulo: ";
	leia a, b, c;
	
	bc = b - c;	
	se bc < 0 então
		bc = bc* - 1;
	fimse;
	
	ac = a - c;
	se ab < 0 então 
		ac = ac* -1;
	fimse;
	
	ab = a - b;
	se ab < 0 então
		ab = ab* -1;
	fimse;	
	
	se (bc < a .E. a < b + c) .E. (ac < b .E. b < a + c) .E. (ab < c .E. c < a+b) então
		se (a =b) .E. (b = c) então
			escreva "Triangulo Equilátero";
		senão
			se (a = b) .OU. (b = c) .OU. (c = a) então
				escreva "Triangulo Isósceles";
			senão
				escreva "Triangulo escaleno";
			fimse;
		fimse;
	senão
		escreva "Estes valores não são de um triângulo";
	fimse;
fim.
		
		
	
