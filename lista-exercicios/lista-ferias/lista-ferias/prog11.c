#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void inverte(int *mat, int ordem){
	
	int aux, i, j, bugcorrector=0;
	
	if (ordem%2 != 0)
	{
	bugcorrector = 1;
	}	
	
	for (i=0; i<(ordem+bugcorrector)/2; i++)
	{
		for (j=0; j<ordem; j++)
		{
				if ((bugcorrector == 1) && ((i==((ordem)/2))&&(j>=ordem/2)))
				{}
		
				else
				{
				aux = mat[((ordem-1-i)*ordem) + (ordem-1)-j];
				mat[((ordem-1-i)*ordem) + (ordem-1)-j] = mat[(ordem*i)+j];
				mat[(ordem*i) + j] = aux;
				}
			
		}
	}
	
}

int main(){
	
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%i", &n);
	
	srand(time(NULL));
	
	int matriz[n][n], i, j;
		
	system("clear");
	printf("MATRIZ ORIGINAL!\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		matriz[i][j] = rand()%10;
		printf("%i ", matriz[i][j]);
		}
	printf("\n");
	}	
	


	inverte(&matriz[0][0], n);

	printf("\n\n");
	printf("MATRIZ INVERTIDA!\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{		
		printf("%i ", matriz[i][j]);
		}
	printf("\n");
	}
	return(0);
}
