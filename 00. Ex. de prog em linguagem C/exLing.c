#include <stdio.h>
#include <stdlib.h>

main(){
    int a,b, temp;   /* Informa que as variáveis são do tipo inteiro*/

    printf("\nEntre com um valor em A: ");
    scanf("%d", &a);

    printf("\nEntre com o valor em B: ");
    scanf("%d", &b);

    // Trocando o conteúdo das variáveis
    temp = a;
    a = b;
    b = temp;

    printf("\n Agora A=%d e B=%d \n", a, b);
    system("pause");   // Fim do programa
}
