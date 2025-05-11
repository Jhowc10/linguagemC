algoritimo quadrilátero;

var
	a, b, c, d: real;
	
inicio
	escreva "Entre com 4 lados: ";
		leia a, b, c, d;
		
	se a=b .E. b=c .E. c=d então
		escreva "quadrado";
	senão se a=c .E. b=d então
		escreva "retangulo";
	senão se a=b .E. c=d então
		escreva "retangulo";
	senão se a-d .E. b=c então
		esceva "retangulo";
	senão
		esceva "Figura não reconhecida";
	fimse;
fim.
