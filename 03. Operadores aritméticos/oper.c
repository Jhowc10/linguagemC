#include <stdio.h>

main(){
    /* Os operadore aritméticos são: +, -, *, /, %, ++ e --*/
    int a;
    float b;
    
    //DIVISÃO
    /* Observe a seguir, que se o valor atribuído a b for 9 e não 9.0, o resultado será 4 e não 4.5*/
    b = 9 / 2; /* Operador de divisão. O valor de b será 4 porque há uma conversão para inteiro automaticamente */
    printf("\n b=%.2f \n\n", b);

    a = 9 / 2; /* Operado divisão. O valor de a será 4 porque a é tipo inteiro */

    // Observe que agora usamos 9.0 e não apenas o 9
    b = 9.0 / 2; /* Operador divisão. O valor de b será 4.5 porque b é real*/
    printf("\n a=%d b=%.2f \n\n", a, b);

    //ADIÇÃO
    a = a + 2; /* Operador soma. Soma o valor de a + 2. O resultado final de a será 6 */

    b = b - 2; /* Operador subtração. Subtrai 2 de b. O resultado final de b será 2.5 */
    printf("\n a=%d b=%.2f \n\n", a, b); 
    
    //MULTIPLICAÇÃO
    a = a*2; /* Operador de multiplicação. O resultado será 12 */
    printf("\n a=%d \n\n", a, b);

    //INCLEMENTO
    a++; /* Operador inclemento. a++ é o mesmo que a = a + 1; */

    b++; /* Operador inclemento. b++ é o mesmo que b = b + 1; */
    printf("\n a=%d b=%.2f \n\n", a, b);

    //DECREMENTO
    a--; /* Operador decremento. a-- é o mesmo que a = a - 1; */

    b--; /* Operador decremento. b-- é o mesmo que b = b - 1; */
    printf("\n a=%d b=%.2f \n\n", a, b);

    //RESTO
    a = a % 2; /* Operador % fornece o resto da divisão entre dois números. só vale para tipos inteiro */
    printf("\n\n a=%d \n\n");


    // Notação compacta
    /*
    x = x + y; pode ser escrito como: x += y;
    x = x - y; pode ser escrito como: x -= y;
    x = x * y; pode ser escrito como: x *= y;
    x = x / y; pode ser escrito como: x /= y; 

    system("pause");
}