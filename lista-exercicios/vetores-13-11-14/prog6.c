/*
 *   Exercício 6 ­ Leia 10 números inteiros e armazene em um vetor v. Faça um programa que receba o vetor v
 *   e crie dois novos vetores v1 e v2. Copie os valores ímpares de v para v1, e os valores pares de v para v2.
 *   No final escreva os elementos que estão v1 e v2.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int v[10], v1[10], v2[10], counter_v1=0, counter_v2=0;

    srand(time(NULL));
    for (int i = 0; i < 10; ++i)
    {
        v[i] = rand() % 10;
	if( v[i] % 2 == 0 )
	{
	    v2[i] = v[i];
	    counter_v2++;
	}
	else if( v[i] % 2 != 0 )
	{
	    v1[i] = v[i];
	    counter_v1++;
	}
    }

    printf("Vetor Original\n");
    for( int i = 0; i < 10; i++ )
    {
	printf("%d\n", v[i]);
    }
    
    printf("Vetor impar\n");
    for( int i = 0; i < counter_v1; i++ )
    {
	printf("%d\n", v1[i]);
    }

    printf("Vetor par\n");
    for( int i = 0; i < counter_v2; i++ )
    {
	printf("%d\n", v2[i]);
    }
    return 0;
}

