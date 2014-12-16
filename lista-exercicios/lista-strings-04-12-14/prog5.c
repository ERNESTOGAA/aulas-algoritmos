/*
 *    5) Faça um programa que conte o numero de 1’s que aparecem em  ́um string.
 *    a) Exemplo: 0011001 -> 3
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{
    char string[50];
    int counter=0, i;

    printf("Digite uma sequencia de numeros: ");
    scanf("%s", string);

    for( i = 0; i < strlen(string)-1; ++i)
    {
	if( string[i] == 49)
	    counter++;
    }

    printf("O numero de 1's é de %d\n", counter);

    return 0;
}
