#include <stdio.h>

main(){
    int resultado1;
    int resultado2;

    resultado1 = !0 && 0 || 0;
    printf("\n resultado1 =%d \n", resultado1);

    resultado2 = !(0 && 0) || 0;
    printf("\n resultado2 =%d \n", resultado2);
}