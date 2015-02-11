#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ORD 10

void minimax(int *mat, int *valor, int *linha, int *coluna){
	
	int matriz[ORD][ORD], l,c, maior;
	
	for (l=0; l<ORD; l++)
	{
		for (c=0; c<ORD; c++)
		{
		matriz[l][c] = mat[(l*ORD)+c];
		
			if ((matriz[l][c] > maior) || (l==0 && c==0))
			{
			*linha = l;
			maior = matriz[l][c];
			}
		}
	}
	
	for (c=0; c<ORD; c++)
	{
		if ((matriz[*linha][c] < *valor) || (c==0))
		{
		*valor = matriz[*linha][c];
		*coluna = c;
		}
	}

}


int main(){
	
	int mat[ORD][ORD], l,c, valor=0;
	srand(time(NULL));
	
	for (l=0; l<ORD; l++)
	{
		for (c=0; c<ORD; c++)
		{
		mat[l][c] = rand()%100;
		printf("%i ", mat[l][c]);
		}
	printf("\n");
	}

	minimax(&mat[0][0], &valor, &l,&c);	

	printf("Minimax: %i\nPosição: a(%i,%i)", valor, l+1,c+1);

	return(0);
}
