#include <stdio.h>

main()
{
	int p1, p2;
	printf("Digite o preço do produto: ");
	scanf("%d",&p1);
	printf("Digite o codigo do produto:  ");
	scanf("%d",&p2);
	switch(p2){
		case 1: printf("Valor %d  Procedencia: Sul  ", p1);break;
		case 2: printf("Valor %d  Procedencia: Norte  ", p1);break;
		case 3: printf("Valor %d  Procedencia: Leste  ", p1);break;
		case 4: printf("Valor %d  Procedencia: Oeste  ", p1);break;
		case 5: printf("Valor %d  Procedencia: Nordeste  ", p1);break;
		case 6: printf("Valor %d  Procedencia: Nordeste  ", p1);break;
		case 7: printf("Valor %d  Procedencia: Suldeste  ", p1);break;
		case 8: printf("Valor %d  Procedencia: Suldeste  ", p1);break;
		case 9: printf("Valor %d  Procedencia: Suldeste ", p1);break;
		default: if (p2 >= 10 && p2 <= 20){
					printf("Valor %d  Procedencia: Centro-Oeste ", p1);
				}else{
					if (25 <= p2 && p2 <= 30){
				 		printf("Valor %d  Procedencia: Nordeste ", p1);
					}else{ printf("Codigo do produto invalido ");
				}
			}
	}
	system ("PAUSE");
}
