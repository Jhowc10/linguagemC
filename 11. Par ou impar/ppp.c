algoritimo quadril�tero;

var
	a, b, c, d: real;
	
inicio
	escreva "Entre com 4 lados: ";
		leia a, b, c, d;
		
	se a=b .E. b=c .E. c=d ent�o
		escreva "quadrado";
	sen�o se a=c .E. b=d ent�o
		escreva "retangulo";
	sen�o se a=b .E. c=d ent�o
		escreva "retangulo";
	sen�o se a-d .E. b=c ent�o
		esceva "retangulo";
	sen�o
		esceva "Figura n�o reconhecida";
	fimse;
fim.
