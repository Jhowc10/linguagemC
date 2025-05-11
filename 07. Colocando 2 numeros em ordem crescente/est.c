#include <stdio.h>

// Colocando dois números em ordem crescente

main(){
    int a, b;
    printf("\n Entre com 2 numeros: ");
    scanf("%d %d", &a, &b);

    if(a < b){
        printf("\n %d %d \n\n", a, b);
    }else{
        printf("\n %d %d \n\n", b, a);
    }
    sistem("pause");
}