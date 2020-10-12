#include <stdio.h>

main(){
	int v[5], v2[5],i,s,soma;
	for (i=0;i <= 5;i+=1){
		v[i]=i;
		v2[i]=i;
		
	}
	for (s=0;s <= 5;s+=1){
		soma = v[s] + v2[s];
		printf("Soma na posicao %d = %d \n",s,soma);
	}
	
}
