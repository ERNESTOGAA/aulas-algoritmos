/*
 *     9 - Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são
 *     primos e suas respectivas posições.
 */

#include <stdio.h>
#include <stdlib.h>
#include "lib/vetores.h"

#define SIZE 20

int main(int argc, char *argv[])
{
    int v[SIZE], i;
    randomIntFill(v, SIZE, SIZE); 

    for (i = 0; i < SIZE; ++i)
    {
	if( v[i] > 1 && !isPrime(v[i]))
	    printf("%d é primo\n", v[i]);
        
	else
	    printf("%d não é primo\n", v[i]);
    }

    return 0;
    
}
