/*
 *    Exercício 1 ­ Faça um programa que dado um vetor V imprima na tela um valor X e a quantidade de vezes
 *    que ele aparece no vetor.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int v[10], repete, counter=0;

    srand(time(NULL));
    repete = rand() % 10;

    for (int i = 0; i < 10; ++i)
    {
        v[i] = rand() % 10;
	if(v[i] == repete)
	    ++counter;
    }

    for( int i = 0; i < 10; ++i )
    {
	printf("%d\t", v[i]);
    }
    printf("\n");
    printf("O numero %d, aparece %d vezes no vetor\n", repete, counter);

    return 0;
}
