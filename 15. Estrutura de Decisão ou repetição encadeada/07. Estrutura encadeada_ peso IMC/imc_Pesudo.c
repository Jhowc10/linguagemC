Programa IMC;

var
	imc, peso, altura : real;
	
incio
	escreva "Entre com o peso e a altura";
	leia (peso, altura);
	
	imc <- peso / altura * altura;
	
	se imc < 18.5 ent�o
		escreva "Abaixo do peso ideal";
		sen�o se imc >= 18.5 .E. imc <25 ent�o
			escreva "Parabens. Voce esta normal";
			sen�o se imc >= 25 .E. imc <30 ent�o
				escreva "Voce esta com sobrepeso";
				sen�o se imc >= 30 .E. imc<35 ent�o
					escreva "Voc� esta obeso";
				sen�o
					ecreva "Voc� est� com obesidade m�rbida";
				fim-se;
			fim-se;
		fim-se;
	fim-se;
fim.
