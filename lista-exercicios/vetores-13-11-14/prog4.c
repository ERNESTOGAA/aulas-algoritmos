/*
 *    Exercício 4 ­ Considere um vetor de Tamanho = 100 com números inteiros aleatórios inseridos pelo
 *    usuário entre 0 e 9. Faça um programa que preencha este vetor e conte a repetição dos números 0 à 9
 *    presentes neste vetor. Utilize um vetor como contador.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int v[100], repete[10] ={ 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    
    srand(time(NULL));
    
    for (int i = 0; i < 100; ++i)
    {
        v[i] = rand() % 10;
	if( v[i] == 0 )
	    repete[0] += 1;
	else if( v[i] == 1 )
	    repete[1] += 1;
	else if( v[i] == 2 )
	    repete[2] += 2;
	else if( v[i] == 3 )
	    repete[3] += 3;
	else if( v[i] == 4 )
	    repete[4] += 4;
	else if( v[i] == 5 )
	    repete[5] += 5;
	else if( v[i] == 6 )
	    repete[6] += 6;
	else if( v[i] == 7 )
	    repete[7] += 7;
	else if( v[i] == 8 )
	    repete[8] += 8;
	else if( v[i] == 9 )
	    repete[9] += 9;
    }

    printf("Vetor final\n");
    for( int i = 0; i < 100; i ++ )
    {
	printf("[%d] %d\n", i, v[i]);
    }
    
    printf("Repetições\n");
    for( int i = 0; i < 10; i++ )
    {	
	printf("O numero de repetiçẽos de %d é %d\n", i, repete[i]);
    }
    return 0;
}
