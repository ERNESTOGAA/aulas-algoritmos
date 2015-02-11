#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ORD 6
int main() {
	int matriz[6][6], i,j, aux=0;
	srand(time(NULL));

	for(i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{
		matriz[i][j] = rand()%10;
		printf("%d ", matriz[i][j]);
		}
	printf("\n");
	}
printf("\n");	
	for (i=0; i<ORD; i++)
	{
		for(j=0; j<ORD; j=j+2)
		{
		aux = matriz[i][j+1];
		matriz[i][j+1] = matriz[i][j];
		matriz[i][j] = aux;
		}
	}

	for(i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{
		printf("%d ", matriz[i][j]);
		}
	printf("\n");
	}
return(0);
}
