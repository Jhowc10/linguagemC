#include <stdio.h>
#include <stdlib.h>
int n;
 
void entrada (){
    printf ("\n Digite o valor de n=");
    scanf ("%d", &n);
}
 
void dobro (){
    n = n*2;
    printf ("\n Dobro de n = %d",n);
}
int paridade (){
     if (n%2==0)
         return (1);
     else return (0);
}

main(){
    	int par_impar;
 
        entrada ();
        dobro();
        par_impar = paridade ();
 
        if (par_impar == 1){		
             printf ("\n O numero e par \n");
        }else{
		 printf ("\n O numero e impar \n");
		}	
    system ("pause");        
}

