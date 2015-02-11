/*Autor: WaGjUb (Daniel Costa Valerio)*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int transf(int *mat, int linhas, int colunas, int *v){
	
	int i, j, verif=0, posicao=0;

	for(i=0; i<linhas*colunas; i++)
	{
		for (j=0; j<i; j++)
		{
			if(mat[i] == mat[j])
			{
			verif=1;
			}

		}
		
		if (verif == 0)
		{
		v[posicao] = mat[i];
		posicao++;
		}
	verif=0;
	}
	
return(posicao);
}

int main(){
	
	srand(time(NULL));	
	int n, m, quant;
	
	printf("Digite o valor de n e m: ");
	scanf("%d %d", &n, &m);

	system("clear");	
	int matriz[n][m],i,j,vetor[n*m];
		
	printf("Matriz: \n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<m; j++)
		{
		matriz[i][j] = rand()%10;
		printf("%d ",matriz[i][j]);
		}
	printf("\n");
	}

	
	quant = transf(&matriz[0][0], n, m, &vetor[0]);

	printf("\nVetor: \n");
	for (i=0; i<quant; i++)
	{
	printf("%d ", vetor[i]);
	}
	
return(0);
}
