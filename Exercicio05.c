#include <stdio.h>

main(){
	float t1,t2,t3,so1,so2;
	char s;
	printf("d - para compra a vista em dinheiro\n");
	printf("c - para compras a vista em cheque\n");
	printf("s - para sair do programa\n");
	do{
		printf("Sua opcao: ");
		scanf("%s",&s);
		if (s =='d'|| s == 'D'){
			printf("Valor do produto: ");
			scanf("%f",&t1);
			so1 = t1 + so1;
		}else{
			if (s =='c' || s == 'C'){
				printf("Valor do produto: ");
				scanf("%f",&t2);
				so2 = t2 + so2;
			}
		}
	}while(s != 's');
	printf("----------------------------------\n");
	printf("Valor total da compra a vista em dinheiro: %G \n",so1);
	printf("Valor total da compra a vista em cheque: %G \n",so2);
	printf("Valor total das compras efetuadas: %G ", so1 + so2);
}
