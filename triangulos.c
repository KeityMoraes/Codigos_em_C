#include <stdio.h>
main()
{
	float ladoA, ladoB, ladoC;
	printf("Digite o valor do primeiro lado: ");
	scanf("%f",&ladoA);
	printf("Digite o valor do segundo lado: ");
	scanf("%f",&ladoB);
	printf("Digite o valor do terceiro lado: ");
	scanf("%f",&ladoC);
	if (ladoA == ladoB && ladoB == ladoC)
	{
		printf("Os valores correspondem a um Triangulo Equilatero \n");
	}
	if (ladoA != ladoB && ladoB != ladoC && ladoA != ladoC && ladoA != 0 && ladoB != 0 && ladoC != 0 )
	{
		printf("Os valores correspondem a um triangulo Escaleno \n");
	}
	if (ladoA == ladoB && ladoA!=ladoC || ladoB == ladoC && ladoB != ladoA || ladoA==ladoC && ladoA!=ladoB)
	{
		printf ("Os valores correspondem a um Triangulo Isosceles \n");
	}
	if ((ladoA<=0)||(ladoB<=0)||(ladoC<=0)||(ladoA>=ladoB+ladoC)||(ladoB>=ladoA+ladoC)||(ladoC>=ladoA+ladoB))
	{
		printf("---------- Os valores nao formam um triangulo -------------- \n");
	}
	system ("PAUSE");
}
