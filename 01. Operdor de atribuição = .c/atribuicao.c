#include <stdio.h>

main(){
    int a,x,y;
    float b;
    char c;

    a = 2;     // A váriável a recebe o inteiro 2
    b = 3.67;  // A variável b recebe o valor real 3.67
    c = "c";   // A variável c recebe a letra c, que é uma string
    printf("\n\n a=%d b=%.2f c='%c' \n\n", a, b, c); 
    // .2f significa que o real terá apenas duas casas decimais, 

    // Podemos também fazer atribuições mútiplas em uma única linha
    a = x = y = 6;
    printf("\n\n a=%d x=%d y=%d \n\n", a, x, y);
    system("pause");
}