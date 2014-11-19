/*
 *    3 - Escreva um programa que percorra um vetor de inteiros e substitua todos os valores negativos
 *    por 0.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10

int main(int argc, char *argv[])
{
    int v[N], i;
    srand(time(NULL));
    for (i = 0; i < N; ++i)
    {
        v[i] = rand() % 20 + (-10);
	if (v[i] < 0)
	{
	    v[i] = 0;
	}
    }

    for (i = 0; i < N; ++i)
    {
        printf("%d\n", v[i]);
    }

    return 0;
}
