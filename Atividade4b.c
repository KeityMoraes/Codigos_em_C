#include <stdio.h>

main(){
	float c,f;
	c = -100;
	while (c < 110){
		f = (c*9/5)+32;
		printf(" %G graus celsius = %G Fahrenheit \n", c, f);
		c = c + 10;
	}
	system ("PAUSE");
}
