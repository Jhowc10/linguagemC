#include <stdio.h>
#include <stdlib.h>

main(){
		int n = 5;
	int *pn;
	pn = &n;
	*pn = *pn / 5;
	
	printf("\n Valor de n = %d \n", *pn);
  
	system("pause");
}
