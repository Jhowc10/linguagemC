algoritimo divisibilidade5;

var
	x : inteiro;
	
inicio
	escreva "Entre com um numero: ";
	leia x;
	
	se x mod 5 = 0 então
		escreva " ", x, "é divisivel por 5";
	senão
		escreva " ", x, "não é divisivel por 5";
	fimse;
fim.
