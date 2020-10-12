#include <stdio.h>

main(){
	int v[5],v2[5],va,i,in;
	int cont;
	cont = 0;
	for (i=0;i <= 4; i+=1){
		printf("Digite o numero da posicao %d: ",i);
		scanf("%d",&va);
		v[i] = va;
	}
	for (in=5;in<=0;in-=1){
		v2[in] = v[cont];
		cont += 1;
		printf("Valores inverso: %d \n", v2[in]);
	}
	system("PAUSE");
}
