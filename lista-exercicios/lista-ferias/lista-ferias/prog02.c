//2-Declare uma matriz 5 x 5.Preencha com 1 a diagonal principal, com 2 a diagonal secundária e com 0 os demais elementos. Escreva ao final a matriz obtida.

#include <stdio.h>
#define ORDEM 5

int main(){
	
	int matriz[ORDEM][ORDEM];

	for (int i=0; i<ORDEM; i++)
	{
		for (int j=0; j<ORDEM; j++)
		{
			matriz[i][j] = 0;
	
			if (i==j)
			{
			matriz[i][j] = 1;
			}
			
			if (j == (ORDEM-i-1))
			{
			matriz[i][j] = 2;
			}
							
			if ((i==j) && (j==(ORDEM-i-1)))
			{
			matriz[i][j] = 0;
			}
	
			printf("%d ", matriz[i][j]);		
		}	
	printf("\n");
	}
	
return(0);
}
