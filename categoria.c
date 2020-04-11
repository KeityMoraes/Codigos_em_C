#include <stdio.h>
main()
{	
	int idade;
	printf("Digite sua idade: \n ");
	scanf("%d",&idade);
	if (idade >= 5 && idade <= 7 ) 
	{
		printf("Voce esta na categoria Infantil A \n");
	}
	if (idade >= 8 && idade <= 10)
	{
		printf("Voce esta na categoria Infantil B \n");
	}
	if (idade >= 11 && idade <= 13)
	{
		printf("Voce esta na categoria Juvenil A \n");
	}
	if (idade >= 14 && idade <= 17)
	{
		printf ("Voce esta na categoria Juvenil B \n");
	}
	else {
		printf ("Voce nao esta em nenhuma categoria \n ");
	}
	system ("PAUSE");
}
