#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CCORR 1
#define CPOUP 2

struct conta{
	int nroconta, tipo_conta;
	char nome[30];
	float saldo;
	
	union{
		struct{
			float limite;
		}contcorr;
		
		struct{
			float taxa_juros;
		}contpoup;

	}infoconta;
};

main(){
	struct conta p[2];
	
	int i;
	printf("\n Digite o numero da conta: ");
	scanf("% d", &p[0].nroconta);
	
	printf("\n Digite o nome: ");
	fflush(stdin);
	gets(p[0].nome);
	
	printf("\n Digite o saldo: ");
	scanf("% f", &p[0].saldo);
	
	printf("\n Digite o limite: ");
	scanf("% f", &p[0].infoconta.contcorr.limite);
	p[0].tipo_conta = 1;
	
	printf("\n Digite o numero da conta: ");
	scanf("% d", &p[1].nroconta);
	
	printf("\n Digite o nome: ");
	fflush(stdin);
	gets(p[1].nome);
	
	printf("\n Digite o saldo: ");
	scanf("% f", &p[1].saldo);
	
	printf("\n Digite a taxa de juros: ");
	scanf("% f", &p[1].infoconta.contpoup.taxa_juros);
	p[1].tipo_conta = 2;
	
	for (i=0;i<=1;i++){
      if (p[i].tipo_conta == CCORR){
           printf("\n Nro da conta= %d",p[i].nroconta);
           printf("\n Nome=");
           fflush (stdin);
           puts(p[i].nome);
           printf("\n Saldo= %.2f",p[i].saldo);
           printf("\n Limite=%.2f",p[i].infoconta.contcorr.limite);
   }
 else if (p[i].tipo_conta== CPOUP) {
           printf("\n Nro da conta= %d",p[i].nroconta);
           printf("\n Nome=");
           fflush (stdin);
           puts(p[i].nome);
           printf("\n Saldo= %.2f",p[i].saldo);
           printf("\n Taxa de juros=%.2f",p[i].infoconta.contpoup.taxa_juros);
         }
 }
 system ("PAUSE");
}
	
	
	
	
