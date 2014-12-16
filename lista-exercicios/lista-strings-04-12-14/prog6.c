/*
 *     6) Faça um programa que gere uma string de tamanho 100 de letras minúsculas aleatórias
 *     (veja Tabela ASCII). Conte quntas vezes cada letra aparece neste vetor. Repita o
 *     procedimento aumentando o tamanho da string para 1000. Logo em seguida faça
 *     novamente repetindo o processo para 5000 e 10000. Ao aumentar o tamanho da string
 *     existe uma regularidade nas proporções estatísticas de ocorrência da letra?  
 */
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define N 100

int main(int argc, char **argv)
{
    char string[N], alfabeto[26];
    int i, pos, contagem[26];

    memset(contagem, 0, sizeof(contagem));
    srand(time(NULL));

    for(i=97, pos=0; i <=122; ++i, pos++)
    {
	alfabeto[pos] = i;
    }

    for( i = 0; i < N; ++i)
    {
	string[i] = (rand() % 26) + 97;
    }

    for( i=0; i < 26; ++i)
    {
	for(pos = 0; pos < N; ++pos)
	{
	    if(alfabeto[i] == string[pos])
	    {
		contagem[i]++;
	    }
	}
    }

    for( i=0; i < 26; ++i )
    {
	printf("Letra %c: %d vezes\n", alfabeto[i], contagem[i]);
    }

    return 0;
}
