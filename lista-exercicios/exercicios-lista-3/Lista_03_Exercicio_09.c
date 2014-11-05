/*
 *   9. Faça um programa que leia um numero inteiro positivo N e imprima todos os números impares de 1 até N
 *   em ordem decrescente.
 */
#include <stdio.h>

int main()
{
    int n;
    printf("Digite um natural: ");
    scanf( "%d", &n );

    for( int i = n; i > 0; i--)
    {
	if( i % 2 != 0 )
	    printf("%d\n", i );
    }
    return 0;
}

