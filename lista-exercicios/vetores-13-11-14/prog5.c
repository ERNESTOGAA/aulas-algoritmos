/*
 *    Exercício 5 ­ Dado um vetor contendo números pares e ímpares, faça um programa que separe na primeira
 *    parte do vetor os números pares e na segunda parte os números ímpares.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int v[10], vfinal[10], counter=0;
    
    srand(time(NULL));
    
    for( int i = 0; i < 10; ++i )
    {
        v[i] = rand() % 10;
    }
    
    for( int i = 0; i < 10; ++i )
    {
	if( v[i] % 2 == 0 )
	{
	    vfinal[i] = v[i];
	    ++counter;
	}
    }

    for( int i = 0; i < 10; ++i )
    {
	if( v[i] % 2 > 0 ){
	    vfinal[counter] = v[i];
	    ++counter;
	}
    }

    printf("Vetor Inicial\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", v[i]);
    }

    printf("Vetor Final\n");
    for (int i = 0; i < 10; ++i)
    {
        printf("%d\n", vfinal[i]);
    }
    return 0;
}
