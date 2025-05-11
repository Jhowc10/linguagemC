#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union dados_funcionario{
    int matricula;
    float salario;
    char nome [40];
    char cargo [30];
};
main(){
    union dados_funcionario func;
    
    printf ("\n Digite a matricula:");
    scanf ("% d", &func.matricula);
    
    printf ("\n Matricula = % d", func.matricula);
    
    printf ("\n Digite o nome:");
    fflush (stdin);
    gets(func.nome);
    puts(func.nome);
    
    printf ("\n Digite o cargo:");
    gets(func.cargo);
    puts(func.cargo);
    
    printf ("\n Digite o salario:");
    scanf ("%f", &func.salario);
    printf ("\n Salario = % f\n", func.salario);
    
    system ("PAUSE");
}
