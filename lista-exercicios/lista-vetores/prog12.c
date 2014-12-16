/*
 *    12 - Faça um programa que receba 5 números inteiros, os armazene em um vetor e mostre:
 *	  ● Os números pares digitados.
 *	  ● A soma dos números pares.
 *	  ● Os números impares digitados.
 *	  ● A quantidade de números primos digitados.
 */
#include <stdio.h>
#include <stdio.h>
#include "lib/vetores.h"

#define SIZE 5
int main(int argc, char *argv[])
{
    int v[SIZE], i, evenSum=0, oddSum=0, primeCounter=0;
    randomIntFill(v, SIZE, 10);

    for (i = 0; i < SIZE; ++i)
    {
	if( !isPrime(v[i]))
	{
	    primeCounter++;
	}
        if (v[i] % 2 == 0)
        {
            evenSum += v[i];
	    printf("Pares: %d\n", v[i] );
        }
    }
    
    for (i = 0; i < SIZE; ++i)
    {
        if (v[i] % 2 > 0)
        {
            oddSum += v[i];
	    printf("Impares: %d\n", v[i] );
        }
    }

    printf("Soma pares: %d\n"
	    "Soma imapares: %d\n"
	    "Existem %d números primos\n", evenSum, oddSum, primeCounter );

    return 0;
}
