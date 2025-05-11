#include <stdio.h>
#include <stdlib.h>
// defini��o da estrutura funcion�rio
struct Funcionario {
    char nome[80];
    float salario;
};
// defini��o da fun��o reajustarSalario
// note que temos que colocar o operador * antes do nome do parametro, indicando que a passagem � por refer�ncia

void reajustarSalario (struct Funcionario *func) {
    if (func->salario < 500) {
        // reajusta o salario em 12%
        func->salario = func->salario * 1.12;
    }
    else {
        // reajusta o salario em 7%
        func->salario = func->salario * 1.07;
    }
}

main () {
    // declara��o da vari�vel do tipo funcionario
    struct Funcionario f;
    // leitura dos dados do funcion�rio
    printf ("Nome: ");
    gets (f.nome);
    printf ("Salario: ");
    scanf ("% f", &f.salario);
    // chamada a fun��o de reajuste de salario
    // note que temos que colocar o operador & antes do
    // nome da variavel de estrutura, pois a estamos
    // passando por referencia
    reajustarSalario (&f);
    // imprime os dados do funcionario
    printf ("% s - %.2f\n\n", f.nome, f.salario);
    system ("PAUSE");
}
