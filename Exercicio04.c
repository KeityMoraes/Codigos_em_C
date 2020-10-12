#include <stdio.h>

main(){
	int n,n2,menor, maior;
	n2 = 0;
	do {
		printf("Digite um numero (inteiro): ");
		scanf("%d",&n);
		if (n2==0){
			menor = maior = n;
		}else{
			if(n2 != 0 && n != 0){
				if(n>=maior)
					maior = n;
				if(n<=menor)
					menor = n;
				}
			}
		n2 = n2+1;
		} while(n!=0);
	printf("Menor numero digitado: %d \nMaior numero digitado: %d", menor,maior);
}
