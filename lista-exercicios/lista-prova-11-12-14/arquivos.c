/*
 *    Faça um programa que imprima uma lista de 10 nomes em um arquivo( um em cada linha)
 *    Utilize um parametro de forma que seja possivel inserir mais nomes na proxima execução
 */
#include <stdio.h>
#include <string.h>

int main( int argc, char **argv )
{
    FILE *fp;
    char c;

    fp = fopen("names.txt", "a+");
    if ( fp == NULL )
    {
	printf("Erro no arquivo!\n");
	return 1;
    }

    while( 1 )
    {
	c = fgetc(fp);
	printf("%c", c);
    }

    fclose(fp);
    return 0;
}
