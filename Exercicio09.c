#include <stdio.h>
#include<string.h>

main(){ 
	int i,j;
	float r,r2,s;
	j = 7;
	r2 = 0;
	printf("Resultados do somatorio: \n");
	for (i=0;i<=7;i+=1){
		r = (2*j+1)*i/2*j+5;
		r2+=r;
		printf("%G + ",r);
	}
	s= r2 + r2;
	printf("= %G \n",r2);
	printf("Valor total: %G \n",s);
	printf("Executado 8 vezes \n");
}
