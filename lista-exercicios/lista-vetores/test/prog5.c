/*
 *    5 - Faça um programa que receba um valor X e percorra um vetor, o programa deve mostrar na
 *    tela as posições e quantas vezes que X aparece no vetor.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 10
int main(int argc, char *argv[])
{

    int v[N], counter = 0, i, number;
    
    srand(time(NULL));
    
    number = rand() % 20;

    for (i = 0; i < N; ++i)
    {
        v[i] = rand() % 20;
	printf("%d\n", v[i]);
	if ( v[i] == number )
	{
	    counter++;
	}
    }

    
    printf("O numero %d aparece %d vezes no vetor\n", number, counter);

    return 0;
}
