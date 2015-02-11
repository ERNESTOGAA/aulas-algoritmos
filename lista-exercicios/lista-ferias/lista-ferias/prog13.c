#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void transposta(int *mat, int ordem, int *transp){
	
	int i, j;
	
	for (i=0; i<ordem; i++)	
	{
		for(j=0; j<ordem; j++)
		{
		transp[i*ordem+j] = mat[j*ordem+i]; 
		}
	}
	
}


int main(){
	
	srand(time(NULL));
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);

	int matriz[n][n], transp[n][n], i, j;

	printf("Matriz original:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		matriz[i][j] = rand()%10;
		printf("%d ", matriz[i][j]);
		}
	printf("\n");
	}
	
	transposta(&matriz[0][0], n, &transp[0][0]);
	
	printf("\n\n");
	printf("Matriz transposta: \n");
	for(i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		printf("%d ", transp[i][j]);
		}
	printf("\n");
	} 
	
return(0);
}
