/*
 * Crie uma estrutura retangulo (ponto sup.esquerdo e ponto inferior)
 * e um ponto (x,y). Verifique se o ponto está dentro ou fora do
 * retangulo.
 */
#include <stdio.h>

typedef struct
{
	int supx,supy,infx,infy;
}retangulo;

int main(int argc, char *argv[])
{

	int px,py;
	retangulo plano;

	printf("Digite o ponto superior x e y: ");
	scanf("%d %d", &plano.supx, &plano.supy);
	printf("Digite o ponto inferior x e y: ");
	scanf("%d %d", &plano.infx, &plano.infy);

	printf("Digite os pontos x e y separados por espaço: ");
	scanf("%d %d", &px, &py);

	int i,j;
	for( i = plano.supx; i <= plano.infx; i++)
	{
		for( j = plano.supy; j <= plano.infy; j++)
		{
			if( (px == i) && (py == j))
			{
				printf("O ponto está dentro do retângulo!\n");
				break;
			}
		}
	
	}
	return 0;
}
