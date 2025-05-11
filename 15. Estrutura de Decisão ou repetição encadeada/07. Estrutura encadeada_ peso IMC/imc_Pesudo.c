Programa IMC;

var
	imc, peso, altura : real;
	
incio
	escreva "Entre com o peso e a altura";
	leia (peso, altura);
	
	imc <- peso / altura * altura;
	
	se imc < 18.5 então
		escreva "Abaixo do peso ideal";
		senão se imc >= 18.5 .E. imc <25 então
			escreva "Parabens. Voce esta normal";
			senão se imc >= 25 .E. imc <30 então
				escreva "Voce esta com sobrepeso";
				senão se imc >= 30 .E. imc<35 então
					escreva "Você esta obeso";
				senão
					ecreva "Você está com obesidade mórbida";
				fim-se;
			fim-se;
		fim-se;
	fim-se;
fim.
