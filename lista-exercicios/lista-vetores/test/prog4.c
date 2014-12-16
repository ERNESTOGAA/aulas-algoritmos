/*
 *   4 - Faça um programa que leia um vetor N e um inteiro X, e mostre na tela a posição dos
 *   elementos múltiplos de X.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(int argc, char *argv[])
{
    int n[SIZE], multiplo, i;

    srand(time(NULL));

    multiplo = rand() % 10 + 1;
    printf("%d\n", multiplo);

    for (i = 0; i < SIZE; ++i)
    {
	n[i] = rand() % 20;

	if (n[i] % multiplo == 0 && n[i] != 0 )
	{
	    printf("Posição [%d] da matriz: %d\n", i, n[i]);
	    
	}
       
    }

    return 0;
}
