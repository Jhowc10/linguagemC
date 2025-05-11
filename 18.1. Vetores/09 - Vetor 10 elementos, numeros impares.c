#include <stdio.h>
#include <stdlib.h>
 
// constante que armazena o tamanho do vetor
#define TAM 10
 
main () {
     // declaracao do vetor
     int vetor[TAM];
     int i;
     // leitura do vetor
     for (i = 0; i < TAM; i++) {
          printf ("Valor[%d]: ", i);
          scanf ("%d", &vetor[i]);
     }
     // conta a quantidade de impares
     int quantidade = 0;
     for (i = 0; i < TAM; i++) {
          if (vetor[i] % 2 != 0) {
               quantidade++;
          }
     }
     // calcula o percentual em relacao ao total de valores
     float percentual = (float) quantidade / TAM;
     printf ("Quantidade de impares = %d\n", quantidade);
     printf ("Percentual = %.2f %%\n", percentual * 100);
     system ("PAUSE");
}
