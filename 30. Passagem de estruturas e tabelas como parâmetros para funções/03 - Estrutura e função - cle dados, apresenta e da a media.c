#include <stdio.h>
#include <stdlib.h>
#include <string.h>
                                    // defini��o da estrutura Aluno
struct Aluno{
   int matricula;
   char nome[80];
   int serie;
   char turma;
   float media;
};
                                  // defini�ao da fun��o que indica a aprovacao
int estaAprovado (struct Aluno aluno) {
    if(aluno.media >= 6){
        return 1;
    }else{
        return 0;
    }
}
main () {
                                 // declara��o da variavel do tipo Aluno
    struct Aluno umAluno;

    printf ("*** Informe os dados do Aluno ***\n");
    printf ("Matricula: ");
    scanf ("%d", &umAluno.matricula);
    getchar();
    
    printf ("Nome: ");
    gets (umAluno.nome);
    
    printf ("Serie: ");
    scanf ("%d", &umAluno.serie);
    getchar();
    
    printf ("Turma: ");
    scanf ("%c", &umAluno.turma);
    
    printf ("Media: ");
    scanf ("%f", &umAluno.media);

                             // chama a fun��o que indica a aprovacao passando o aluno como parametro
    int aprovado = estaAprovado (umAluno);
                            // imprime a mensagem indicando a aprova��o/reprova��o
    if (aprovado == 1) {
          printf ("\nAluno Aprovado!\n\n");
    }
    else {
          printf ("\nAluno Reprovado!\n\n");
    }
    system ("PAUSE");
}
