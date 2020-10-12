#include <stdio.h>

main(){
	int v[10],i,v2[10];
	for(i = 0; i <= 10; i+=1){
		v[i] = i;
		v2[i] = v[i] - 2;
		printf(" %d ",v2[i]);
	}
	system("PAUSE");
}
