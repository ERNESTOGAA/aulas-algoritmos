/*
 *    1.Dizemos que uma matriz quadrada inteira é um quadrado mágico se a soma dos elementos
 *    de cada linha, a soma dos elementos de cada coluna e a soma dos elementos das diagonais principal e
 *    secundária são todas iguais. Dada uma matriz quadrada A(nxn), verificar se A é um quadrado mágico.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int **matriz, size, coluna = 0, linha = 0, dgPrimaria = 0, dgSecundaria = 0, i,j;

    srand(time(NULL));

    printf("Digite o tamanho da matriz nxn: ");
    scanf("%d", &size);

    matriz = malloc( size * sizeof(int *));

    for (i = 0; i < size; ++i)
    {
       matriz[i] = malloc( size * sizeof( int ));
    }

    for (i = 0; i < size; ++i)
    {
        for (j = 0; j < size; ++j)
        {
	    matriz[i][j] = rand() % 20;
        }
    }

/* Calcula linha e diagonal diagonal*/
    for (i = 0; i < size; ++i)
    {
        for (j = 0; j < size; ++j)
        {
	    linha += matriz[i][j];
	    coluna += matriz[j][i];

	    if ( i == j )
	    {
		dgPrimaria += matriz[i][j];  
	    }

	    if ( i + j == size - 1)
	    {
	        dgSecundaria += matriz[i][j];
	    }
        }
    }

    for (i = 0; i < size; ++i)
    {
        for (j = 0; j < size; ++j)
        {
	    printf("matriz [%d][%d]: %d\n", i+1, j+1, matriz[i][j] );
            
        }
    }

    if( linha == coluna && linha == dgPrimaria && linha == dgSecundaria )
    {
	printf("A matriz é um quadrado perfeito!\n");
    }
    else
	printf("A matriz não é um quadrado perfeito!\n");
    return 0;
}
