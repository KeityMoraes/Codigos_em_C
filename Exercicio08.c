#include <stdio.h>

main(){
	int m,c;
	for (c = 0; c<=100; c+=1 ){
		m = c*7;
		if (7%c == 0){
			printf("%d ",m);
		}
	}
}
