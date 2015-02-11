//3-Leia uma matriz 4x4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor. 

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	
	int matriz[4][4], crd[2] ,maior=-100, cont=0;
		
	srand(time(NULL));

		for (int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
			matriz[i][j] = rand()%10;
			printf("%d ", matriz[i][j]);
				
				if ((matriz[i][j] >= maior) || ((i == j) && (j==0)))
				{
					if (maior < matriz[i][j])
					{
					cont=0;
					}
					if (maior == matriz[i][j])
					{
					cont++;
					}
					
				maior = matriz[i][j];
				crd[0] = i;
				crd[1] = j;
			
				}
				
				
				
			}

		printf("\n");
		}
		
	if(cont==0)
	{
	printf("O maior se encontra na posição: (%i,%i)\nvalor: %i",crd[0]+1, crd[1]+1, maior);	
	}	

	else
	{
	printf("O maior valor esta presente em %i posições, uma delas é: (%i,%i)\nvalor: %i", cont+1, crd[0]+1, crd[1]+1, maior);
	}
printf("\n");
return(0);
}
