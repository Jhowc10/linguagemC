#include <stdio.h>
#include <stdlib.h>
                              // defini��o da estrutura
struct Pessoa {
    char nome[80];
    int idade;
};
main () {
                         // declara��o e inicializa��o da estrutura
    struct Pessoa pessoa = {"Ana", 22};
                   // declara��o de um ponteiro para o tipo da estrutura
    struct Pessoa *ptr;
                   // faz o ponteiro ptr apontar para a estrutura pessoa
    ptr = &pessoa;
                   // imprime os dados dos campos usando o operador seta
    printf ("% s - % d\n\n", ptr->nome, ptr->idade);
    system ("PAUSE");
}
