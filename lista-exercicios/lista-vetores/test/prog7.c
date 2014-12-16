/*
 *    7 - Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais e os
 *    escreva na tela.
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define SIZE 10

int main(int argc, char *argv[])
{
    int v[SIZE], i, j;

    srand(time(NULL));
    
    for (i = 0; i < SIZE; ++i)
    {
        v[i] = rand() % 10;
	for (j = 0; j < i; ++j);
	{
	    if (v[i] == v[j])
	    {
		printf("%d\n", v[i]);   
	    }
	}
    }

    return 0;
}
