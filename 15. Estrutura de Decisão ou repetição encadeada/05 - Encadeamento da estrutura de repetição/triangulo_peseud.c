programa triangulo;

var
	bc, ac, ab, a, b, c: real;
	
inicio
	escreva "Entre com tr�s lados do tri�ngulo: ";
	leia a, b, c;
	
	bc = b - c;	
	se bc < 0 ent�o
		bc = bc* - 1;
	fimse;
	
	ac = a - c;
	se ab < 0 ent�o 
		ac = ac* -1;
	fimse;
	
	ab = a - b;
	se ab < 0 ent�o
		ab = ab* -1;
	fimse;	
	
	se (bc < a .E. a < b + c) .E. (ac < b .E. b < a + c) .E. (ab < c .E. c < a+b) ent�o
		se (a =b) .E. (b = c) ent�o
			escreva "Triangulo Equil�tero";
		sen�o
			se (a = b) .OU. (b = c) .OU. (c = a) ent�o
				escreva "Triangulo Is�sceles";
			sen�o
				escreva "Triangulo escaleno";
			fimse;
		fimse;
	sen�o
		escreva "Estes valores n�o s�o de um tri�ngulo";
	fimse;
fim.
		
		
	
