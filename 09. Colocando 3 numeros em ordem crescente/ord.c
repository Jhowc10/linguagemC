#include <stdio.h>;

main(){

    int a, b, c;

    printf("\n Entre com 3 numeros: ");
    scanf("%d %d %d, &a, &b, &c");

    if(a <= b && b <= c)
        printf("\n %d %d %d, \n\n", a, b, c);
    else if(a <= c && c <= b)
        printf("\n %d %d %d \n\n", a, b, c);
            else if(b <= a && a <= c)
                printf("\n %d %d %d", b, a, c);
                    else if(b <= c && c <= a)
                        printf("\n %d %d %d", b, c, a);
                            else if(c <= a && a <= b)
                                printf("\n %d %d %d", c, a, b);
                                else
                                printf("\n %d %d %d", c, b, a);
    system("pause");


}
