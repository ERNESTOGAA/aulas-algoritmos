/*
 *    1 - Faça um programa que leia um vetor de 5 valores e imprima, todos os valores lidos juntamente
 *    com o maior o menor e a media dos valores.
 */
#include <stdio.h>
#include <stdlib.h>
#include "lib/vetores.h"

#define SIZE 5

int main(int argc, char *argv[])
{
    int v[SIZE];
    int *maiormenor;

    if( argc > 1 )
    {
	for (int i = 0; i < SIZE; ++i)
	{
	   v[i] = atoi(argv[i+1]); 
	}
    }
    else
    {
	for (int i = 0; i < SIZE; ++i)
	{
	    printf("Digite o valor da posição [%d] de 5: ", i+1);
	    scanf("%d", &v[i]);
	}
    }

    maiormenor = getmaxmin(v, SIZE);
    
    printf("Maior: %d\n", *(maiormenor));
    printf("Menor: %d\n", *(maiormenor+1));

    free(maiormenor);

    return 0;

}
