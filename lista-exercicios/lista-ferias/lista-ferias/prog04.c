#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){


	int i,j, num=1, matriz[4][4];

	if (argc != 17)
	{
	printf("%d", argc);
	printf("Erro na quantidade de parametros.");
	exit(1);
	}
	

	for (i=0; i<4; i++)
	{
		for (j=0; j<4; j++)
		{
		matriz[i][j] = atoi(argv[num]);
		num++;
	
			if (i < j)
			{
			matriz[i][j] = 0;
			}
		printf("%d ", matriz[i][j]);
		}
	printf("\n");
	}
	
	
	
return(0);
} 
