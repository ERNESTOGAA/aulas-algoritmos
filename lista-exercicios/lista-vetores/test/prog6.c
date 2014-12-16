/*
 *    6 - Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima o
 *    vetor, o maior e o menor elementos e suas posições.
 */
#include <stdio.h>
#include <stdlib.h>
#include "lib/vetores.h"

#define SIZE 10

int main(int argc, char *argv[])
{
    int v[SIZE], i;
    int *maiormenor;

    if( argc > 1 )
    {
	for (i = 0; i < SIZE; ++i)
	{
	   v[i] = atoi(argv[i+1]); 
	}
    }
    else
    {
	for (i = 0; i < SIZE; ++i)
	{
	    printf("Digite o valor da posição [%d] de %d: ", i, SIZE-1);
	    scanf("%d", &v[i]);
	}
    }

    for (i = 0; i < SIZE; ++i)
    {
	printf("v[%d] = %d\n", i, v[i]);
    }

    maiormenor = getmaxmin(v, SIZE);
    
    printf("Maior: %d\t"
	    "Posição: v[%d]\n"
	    "Menor: %d\t"
	    "Posição: v[%d]\n", *(maiormenor), *(maiormenor+3), *(maiormenor+1), *(maiormenor+4));

    free(maiormenor);

    return 0;

}
