#include <stdio.h>
#include <math.h>
main()
{
	float x1, x2,y1,y2, dist,x,y;
	printf("digite os valores de x e de y nessa ordem: ");
	scanf("%f",&x1,&x2,&y1,&y2);
	x = x2 - x1;
	y = y2 - y1;	
	dist =sqrt((pow(x,2))+(pow(y,2)));
	printf("A distancia entre os pontos e: %0.2f",dist);
	system ("PAUSE");
}
