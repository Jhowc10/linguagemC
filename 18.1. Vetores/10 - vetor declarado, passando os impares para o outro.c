#include <stdio.h>
#include <stdlib.h>
 
// constante que armazena o tamanho do vetor
#define TAM 11
 
main () {
     // declaracao do vetor
     int A[TAM] = {1, 3, 4, 2, 5, 8, 7, 6, 9, 12, 15};
     int B[TAM];
     int i;
     // criacao do vetor B
     for (i = 0; i < TAM; i++) {
          if (A[i] % 2 != 0) {
                B[i] = A[i] * 2;
          } 
          else {
                B[i] = A[i];
          }
      }
      // impressao do vetor B
     printf ("\n*** Dados do Vetor B ***\n");
     for (i = 0; i < TAM; i++) {
             printf ("%d ", B[i]);
     }
     printf ("\n\n");
     system ("PAUSE");
}
