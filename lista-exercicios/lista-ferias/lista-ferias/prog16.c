#include <stdio.h>

int permutacao (int *mat, int ordem){
	
	int i, j, verif=0;	
	
	for (i=0; i<ordem; i++)
	{
		for (j=0; j<ordem; j++)
		{
			if (mat[i*ordem+j] != 0)
			{
			verif++;
			}
		}
	
		if (verif != 1)
		{
		return(1);
		}

	verif = 0;
	}
	
	return(0);
}

int main() {
	int n;

	printf("Digite a ordem da matriz: ");	
	scanf("%d", &n);

	int mat[n][n], i,j;

	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		printf("\nDigite o valor do elemento a(%d,%d): ", i+1,j+1);
		scanf("%d", &mat[i][j]);
		}
	}	

	switch (permutacao(&mat[0][0], n))
	{
	case 0: 
	printf("É permutação");
	break;
	
	case 1: 
	printf("Não é permutação");
	break;
	
	defaut:
	printf("Erro");
	break;
	}

return(0);
}
