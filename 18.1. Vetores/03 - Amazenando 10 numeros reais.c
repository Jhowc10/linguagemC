#include <stdio.h>
#include <stdlib.h>
main () {
     // declara��o de um vetor de 10 elementos reais
     float vetor[10];
     int i;
     // leitura dos dados para o vetor
     printf ("*** Informe os valores para o vetor ***\n");
     for (i = 0; i < 10; i++) {
           printf ("Valor[%d]: ", i);
           // n�o esquecer de colocar o & antes do nome do vetor
           scanf ("%f", &vetor[i]);
     }
     // apresenta��o dos dados do vetor
     printf ("\n\n*** Dados do vetor ***\n");
     for (i = 0; i < 10; i++) {
          printf ("%.2f\n", vetor[i]);
     }
     system ("PAUSE");
}
