/*
 *    2) Crie um programa que receba duas strings por parâmetro e retorne 1 caso sejam iguais ou
 *    0 caso sejam diferentes.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int evalString( char *str1, char *str2 )
{
    int size_str1, size_str2;
    
    size_str1 = strlen(str1);
    size_str2 = strlen(str2);

    if( size_str1 == size_str2 )
    {
	int i, counter=0;
	for( i = 0; i < size_str1 - 1; ++i )
	{
	    if( str1[i] == str2[i] )
		counter++;
	}
	if( counter == size_str1 - 1)
	{
	    return 1;
	}
    }
    else
	return 0;
}

int main( int argc, char **argv )
{
    char str1[50], str2[50];
    
    printf("Digite uma palavra: ");
    fgets(str1, 50, stdin);
    printf("Digite outra palavra: ");
    fgets(str2, 50, stdin);

    printf("Valor: %d\n", evalString(str1, str2));

    return 0;
}
