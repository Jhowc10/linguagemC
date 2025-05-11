#include <stdio.h>
#include <stdlib.h>
 
// constante que armazena o tamanho do vetor
#define TAM 9
 
main () {
     // declaracao do vetor
     int tabuada[TAM];
     int i;
     // leitura de um numero
     int num;
     printf ("Numero: ");
     scanf ("%d", &num);
     // calculo e armazenamento da tabuada no vetor
     for (i = 0; i < TAM; i++) {
          tabuada[i] = num * (i + 1);
     }
     // impressao do vetor
    printf ("\n*** Dados do vetor ***\n");
    for (i = 0; i < TAM; i++) {
          printf ("Valor[%d] = %d\n", i, tabuada[i]);
    }
     system ("PAUSE");
}
