//Autor WaGjUb (Daniel Costa Valerio)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#define ORD 5
int main(){
	
	int i, j, matriz[ORD][ORD], SL[ORD], SC[ORD];
	srand(time(NULL));
	memset(SL,0,sizeof(int)*ORD);
	memset(SC,0,sizeof(int)*ORD);



	for (i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{
		matriz[i][j] = rand()%10;
		printf("%d ", matriz[i][j]);
		SL[i] = SL[i] + matriz[i][j];
		SC[j] = SC[j] + matriz[i][j];
		}
	printf("\n");
	}	

	printf("\nSoma das linhas: \n");

	for (i=0; i<ORD; i++)
	{
	printf("linha %i: %d\n",i+1, SL[i]); 
	}

	printf("\nSoma das colunas: \n");

	for (i=0; i<ORD; i++)
	{
	printf("coluna %i: %d\n",i+1, SC[i]); 
	}

	
return(0);
}
