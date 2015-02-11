//quadrado magico

#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int aux=0, n, dp=0, ds=0, linha=0, coluna=0, verif=0, i, j;
	printf("Digite o valor de n: ");
	scanf("%d", &n);

	system("clear");

	int mat[n][n];
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		printf("Digite o valor de a(%i,%i): ",i+1,j+1);
		scanf("%d", &mat[i][j]);
		system("clear");
		linha = linha + mat[i][j];
		}
	
			if ((aux!=linha) && (i!=0))
			{
			verif = 1;
			}
			
			if (i==0)
			{
			aux = linha;
			}

			if (i== n-1)
			{
			break;
			}

		linha=0;
	}


		
	if (verif == 1)
	{
	goto nao;
	}

	//verificando as diagonais
	
	for (i=0; i<n; i++)
	{
	dp = dp + mat[i][i];
	ds = ds + mat[i][(n-1)-i]; 
	}
		
	if ((linha != dp) || (linha != ds) || (ds != dp))
	{
	goto nao;
	}	
		
	//verificando colunas
	aux=0;	
	for (j=0; j<n; j++)
	{
		for (i=0; i<n; i++)
		{
		coluna = coluna+mat[i][j];
		}


	if ((aux!=coluna) && (j!=0))
	{
	verif = 1;
	}
			
	if (j==0)
	{
	aux = coluna;
	}

	if (j== n-1)
	{
	break;
	}

	coluna=0;
		 
	}
	
	nao:
	if ((coluna == linha) && (coluna == dp) && (coluna == ds))
	{
	printf("É quadrado mágico!");
	}
	else
	{
	printf("Não é quadrado mágico");
	}
	
return(0);
}
