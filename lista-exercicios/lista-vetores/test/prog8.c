/*
 *    8 - Faça um programa que leia dois vetores de 10 posições e calcule outro vetor contendo, nas
 *    posições pares os valores do primeiro vetor e nas impares os valores do segundo.
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

int main(int argc, char *argv[])
{
    int v1[SIZE], v2[SIZE], vfinal[SIZE*2], i, counter1=0, counter2=0;
    
    srand(time(NULL));
    
    for (i = 0; i < SIZE; ++i)
    {
        v1[i] = rand() % 20;
        v2[i] = rand() % 20;
    }
    
    for (i = 0; i < SIZE; ++i)
    {
        printf("v1[%d] = %d\t", i, v1[i] );
        printf("v2[%d] = %d\n", i, v2[i] );
    }

    for (i = 0; i < SIZE*2; ++i)
    {
        if(i % 2 == 0)
        {
            vfinal[i] = v1[counter1];
            counter1++;
        }
        else
        {
            vfinal[i] = v2[counter2];
            counter2++;
        }
    }

    for (i = 0; i < SIZE*2; ++i)
    {
        printf("vfinal[%d] = %d\n",i, vfinal[i] );
    }
    
    return 0;
}
