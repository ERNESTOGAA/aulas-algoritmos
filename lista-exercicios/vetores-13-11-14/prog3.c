/*
 *    Exercício 3 ­ Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas
 *    posições pares os valores do primeiro e nas posições impares os valores do segundo.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int vfinal[20], v1[10], v2[10];

    srand(time(NULL));
    
    for(int i = 0; i < 10; ++i)
    {
        v1[i] = rand() % 20;
	v2[i] = rand() % 20;
    }

    for (int i = 0; i < 20; ++i)
    {
	    if( i % 2 == 0 )
	    {
		vfinal[i] = v1[i];
	    }
	    else
	    {
		vfinal[i] = v2[i];
	    }
    }

    printf("Vetor 1\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", v1[i]);
    }

    printf("Vetor 2\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", v2[i]);
    }

    printf("Vetor Final\n");
    for( int i = 0; i < 20; ++i )
    {
	printf("%d\n", vfinal[i]);
    }

    return 0;
}
