#include <stdio.h>

main(){
	int f,c;
	for (c = -100; c <= 100; c+=10 ){
		f = (c * 9/5) + 32;
		printf("%d graus celsius e igual a %d fahrenheit \n",c,f);
		
	}
}
