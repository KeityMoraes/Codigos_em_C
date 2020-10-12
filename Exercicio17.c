#include <stdio.h>

main(){
	int v[5], i,va,soma;
	soma = 0;
	for (i=0;i <= 4; i+=1){
		printf("Digite o numero da posicao %d: ",i);
		scanf("%d",&va);
		v[i] = va;
	}
	for (i=0;i <= 4; i+=1){
		soma += v[i];
	}
	printf("A soma dos valores = %d \n", soma);
	system("PAUSE");
}
