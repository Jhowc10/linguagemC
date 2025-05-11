#include <stdio.h>

main(){
    int x, y;

    x = 2;
    y = 4;
    x = ++y;
    y = x++;
    
    printf("\n x=%d e y=%d", x, y);
    system("pause");
}