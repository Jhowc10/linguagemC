#include <stdio.h>
#include <stdlib.h>
#include <string.h>
main () {
    char ingles [50][30], portugues [50][30], palavra [30];
    int i;
    for (i = 0; i < 50; i++) {
        printf ("\n\nDigite palavra em ingles: ");
        gets (ingles [i]);
        printf ("\n\nDigite a tradução para o portugues: ");
        gets (portugues [i]);
    }
    printf ("\n\n Digite uma palavra em inglês para saber a tradução para   o portugues:\n\n");
    gets (palavra);
    for (i = 0; i < 50; i++) {
        if ( strcmp(ingles [i], palavra) == 0 ){
            printf ("\n\nPalavra em portugues =");
            puts (portugues [i]);
        }
    }
system ("pause");        
}
