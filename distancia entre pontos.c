#include <stdio.h>
#include <math.h>
main()
{
	float x1, x2,y1,y2, dist,x,y;
	printf("digite o valor de x1: ");
	scanf("%f",&x1);
	printf("Digite o valor de x2: ");
	scanf("%f",&x2);
	printf("Digite o valor de y1: ");
	scanf("%f",&y1);
	printf("Digite o valor de y2: ");
	scanf("%f",&y2);
	x = x2 - x1;
	y = y2 - y1;	
	dist =sqrt((pow(x,2))+(pow(y,2)));
	printf("A distancia entre os pontos e: %0.2f ",dist);
	system ("PAUSE");
}
