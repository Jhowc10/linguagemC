#include <stdio.h>
#include <stdlib.h>

main(){
	
	float notas[5];
	int i;
	
// Armazenando as medias no vetor de 5 elementos
	for(i = 0; i < 5; i++){
		printf("Digite a nota do aluno %d: ", i);
		scanf("%f", &notas[i]);
	}
// Calcula a soma das notas e apresenta cada nota na tela
	float soma =0;
	
	for(i = 0; i < 5; i++){
		soma = soma + notas[i];
		printf("Nota %d = %.1f \n", i, notas[i]);
	}
// Calcula e apresenta a média das notas
	float media = soma / 5;
	
	printf("Media das notas = %.1f \n", media);
	
	system("pause");
}
