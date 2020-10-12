#include <stdio.h>

main(){
	int n,cont;
	float h,nu;
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	nu = 2;
	h = 1;
	for (cont=2; cont <= n + 1; cont+=1 ){
		h = h + 1/nu;
		nu = nu + 1;				
	}
	printf("Valor de h = 1 + 1/2 + 1/3... 1/n= %G \n",h);
	system ("PAUSE");
}
