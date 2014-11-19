#include "vetores.h"
#include <stdlib.h>
#include <time.h>


/* Retona um double de um vetor de tamanho n*/
double getavg( int arr[], int size )
{
    int soma = 0;
    double avg;

    for (int i = 0; i < size; ++i)
    {
       soma += arr[i]; 
    }
    avg = (double) soma / size;
    return avg;
}

/* Retorna um vetor com o maior valor em [0]
 * e menor valor em [1]*/
int * getmaxmin( int *arr, int size )
{
    int *maxmin = malloc(4*sizeof(int));
    maxmin[1] = arr[0];
    for (int i = 0; i < size; ++i)
    {
	if (arr[i] > maxmin[0])
	{
	    maxmin[3] = i;
	    maxmin[0] = arr[i];
	}
	if (arr[i] < maxmin[1])
	{
	    maxmin[4] = i;
	    maxmin[1] = arr[i];
	}
    }

    return maxmin;
}
