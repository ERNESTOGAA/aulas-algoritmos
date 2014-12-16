/*
 *    13 - Faça um programa que preencha um primeiro vetor com 10 números inteiros, e um segundo
 *    vetor com 5 números inteiros. O programa devera mostrar os números do primeiro vetor, junto
 *    com seus divisores do segundo vetor.
 */
#include <stdio.h>
#include "lib/vetores.h"

#define V1 10
#define V2 5

int main(int argc, char *argv[])
{
    int v1[V1], v2[V2], i, j;

    randomIntFill(v1, V1, 20);
    randomIntFill(v2, V2, 10);

    for (i = 0; i < V1; ++i)
    {
        printf("V1[%d] -> %d\n",i, v1[i] );

	for (j = 0; j < V2; ++j)
	{
	    if( v2[j] > 0 &&(v1[i] % v2[j] == 0)) 
	    {
		printf("\tV2[%d]-> %d\n", j, v2[j]);
	    }
	}
    }
    
    return 0;
}
