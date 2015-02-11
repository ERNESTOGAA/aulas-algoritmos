//1-Escreva uma função que armazene em uma matriz C(nxn) o resultado da multiplicação de outras duas matrizes A(nxn) e B(nxn).

#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int n;
	
	printf("Digite o valor de n: ");
	scanf("%d", &n);
	
	int A[n][n], B[n][n], C[n][n], i, j;

	srand(time(NULL));
	
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		A[i][j] = rand()%10;
		B[i][j] = rand()%10;
		C[i][j] = A[i][j]*B[i][j];
		}
	}
	

	printf("MATRIZ A:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		printf("%d ", A[i][j]);
		}
	printf("\n");
	}

	printf("\nMATRIZ B:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		printf("%d ", B[i][j]);
		}
	printf("\n");
	}
	

	printf("\nMATRIZ C:\n");
	for (i=0; i<n; i++)
	{
		for (j=0; j<n; j++)
		{
		printf("%d ", C[i][j]);
		}
	printf("\n");
	}
return(0);	
}
