#include <stdio.h>

main(){
	float alt1, alt2;
	alt1 = 1.50;
	alt2 = 1.10;
	printf("-------------------------------- \n");
	while (alt1 >= alt2){
		alt1 = alt1 + 0.2;
		printf("  %Gm - ", alt1);
		alt2 = alt2 + 0.3;
		printf("%Gm \n", alt2);
	}
	printf("\n ");
	printf("Terao a mesma altura apos quatro anos");
	system ("PAUSE");
}
