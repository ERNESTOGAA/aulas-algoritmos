#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{	
	float media, soma, menor, maior=0, v[50];
	
	srand(time(NULL));

	for( int i = 0; i < 50; i++ )
	{
		v[i] = rand() % 10;
	}
	soma = 0;
	for( int i = 0; i < 50; i++ )
	{
		printf("\t\t%f\n", v[i]);
		soma += v[i];
		if( v[i] > maior )
		{
			maior = v[i];
		
		if( v[i] < menor )
			menor = v[i];

	}

	media = soma / 50.0;

	printf("Média: %f \n"
		   "Soma: %f \n"
		   "Maior: %f\n"
		   "Menor: %f\n", media, soma, maior, menor);

	return 0;
}
