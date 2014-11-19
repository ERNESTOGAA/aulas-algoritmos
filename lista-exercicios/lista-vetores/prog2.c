/*
 *   2 - Escreva um programa que percorra um vetor de inteiros e imprima a soma de todos 
 *       números negativos e a soma de todos os números positivos.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char *argv[])
{
    int v[N], psum = 0, nsum = 0;
    srand(time(NULL));

    for (int i = 0; i < N; ++i)
    {
	v[i] = (rand() % 20) + (-10);
	if (v[i] > 0)
	{
	    psum += v[i];
	}
	else
	    nsum += v[i];
    }

        printf( "soma positiva: %d\n"
		"soma negativa: %d\n",  psum, nsum);

    return 0;
}
