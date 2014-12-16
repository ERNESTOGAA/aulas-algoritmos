/*
 * 1 - Criar uma estrutura p/ representar as coordenadas de um ponto
 * no plano (x,y) en seguida declare e leia do teclado estes dois pontos
 * e exiba a distância enre eles.
 *
 */
#include <stdio.h>
#include <math.h>

typedef struct
{
	float x, y;
}coord;

int main(int argc, char *argv[])
{
	coord c1, c2;
	float distancia = 0;
	float x,y;

	printf("Digite x: ");
	scanf("%f", &c1.x);
	printf("Digite y: ");
	scanf("%f", &c1.y);
	printf("Digite x: ");
	scanf("%f", &c2.x);
	printf("Digite y: ");
	scanf("%f", &c2.y);

	x = c2.x - c1.x;
	y = c2.y - c1.y;
	distancia = sqrt(pow(x,2) + pow(y,2));

	printf("A distancia entre os pontos é de %.2f\n", distancia );

	return 0;
}
