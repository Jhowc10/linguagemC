#include <stdio.h>
#include <stdlib.h>
// constante simb�lica para representar o tamanho do vetor
#define TAM 7
 
// defini��o da fun��o 
void alteraPares (int vet[]) {
     int i;
     for (i = 0; i < TAM; i++) {
     // verifica ser o valor � par
            if (vet[i] % 2 == 0) {
                   vet[i] = 0;
            }
      }
}
main () {
    int vetor[TAM];
    int i;
    // leitura dos dados para o vetor
    printf ("*** Informe os dados para o vetor ***\n");
    for (i = 0; i < TAM; i++) {
        printf ("Valor[%d]: ", i);
        scanf ("%d", &vetor[i]);
    }
    // chamada da funcao alteraPares
    alteraPares (vetor);
    // impressao do vetor
    printf ("\n*** Dados do vetor ***\n");
    for (i = 0; i < TAM; i++) {
        printf ("%d ", vetor[i]);
    }
    printf ("\n\n");
    system ("PAUSE");
}
