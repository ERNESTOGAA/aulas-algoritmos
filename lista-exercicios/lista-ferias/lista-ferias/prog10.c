#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, matriz[10][10];
	
	for (i=0; i<10; i++)
	{
		for (j=0; j<10; j++)
		{
			if (i<j)
			{
			matriz[i][j] = 2*(i+1) + (pow(j+1,2));
			}
			
			if (i==j)
			{
			matriz[i][j] = 3*(pow(i+1,2));
			}
			
			if (i>j)
			{
			matriz[i][j] = pow(4,3) + 5*(pow(j+1,2));
			}
		printf("%i ", matriz[i][j]);
		}
	printf("\n");
	}
	
	
	
return(0);
}
