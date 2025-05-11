#include <stdio.h>

main(){
    int x, y;

    x = 2;
    y = 4;

    printf("\n x=%d e y=%d \n\n", x, y);
    printf("\n x=%d e y=%d \n\n", x++, y++);
    printf("\n x=%d e y=%d \n\n", x, y);
    printf("\n x=%d e y=%d \n\n", ++x, ++y);

    sistem("pause");
}