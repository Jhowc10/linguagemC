#include <stdio.h>
#include <stdlib.h>
#define TAM 12
main () {
 // declara��o do vetor
 float numeros[12], media;
 int i;
 // leitura dos valores do vetor
 printf ("*** Informe os valores do vetor ***\n");
 for (i = 0; i < TAM; i++) {
 printf ("Valor[%d]: ", i);
 scanf ("%f", &numeros[i]);
 }
 // assume inicialmente que primeiro elemento do vetor � o
 // maior e menor valor
 float menor = numeros[0];
 float maior = numeros[0];
 float soma = numeros[0];
 // come�a pelo segundo elemento j� que o primeiro foi considerado
 for (i = 1; i < TAM; i++) {
 soma += numeros[i];
media = soma/12;
if (numeros[i] < menor) {
 menor = numeros[i];
 }
 if (numeros[i] > maior) {
 maior = numeros[i];
 }
 }
 printf("\n A m�dia entre os valores �: %.2f", media);
 printf("\n O menor valor �: %.2f", menor);
 printf("\n O maior valor �: %.2f", maior);
}
