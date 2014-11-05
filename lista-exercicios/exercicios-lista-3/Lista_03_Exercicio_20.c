/*
 *20. Faça um programa que some todos os números naturais abaixo de 1000 que são múltiplos de 3 ou 5.
 */
#include <stdio.h>

int main()
{
    int sum, i;

    for(i=0;i<100;i++)
    {
	if( (i % 3 == 0) || (i % 5 == 0))
	    sum += i;
    }

    printf("O resultado da soma é: %d\n", sum );
    return 0;
}
