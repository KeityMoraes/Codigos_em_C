#include<stdio.h>
main()
{
	int op1;
	float cel, fah;
	printf("O que deseja converter? ");
	printf("opcao 1 (celsios) ");
	printf("opcao 2 (fahrenheit)");
	scanf("%d",&op1);
	if (op1 == 1)
	{
		printf("Celsius: ");
		scanf("%f",&cel);
		fah = (cel*9/5)+32;
		printf("fahrenheit: %0.2f",fah);
	}
	else
	{
		printf("Fahrenheit: ");
		scanf("%f",&fah);
		cel = (fah - 32)*5/9;
		printf("Celsios: %0.2f",cel);
	}
	system ("PAUSE");
}
