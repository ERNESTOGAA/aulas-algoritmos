/*
 *   10. Faça um programa que leia um numero inteiro positivo N e imprima todos os numeros pares de 1 até N
 *   em ordem crescente.
 */
#include <stdio.h>

int main()
{
    int n;
    printf("Digite um natural: ");
    scanf( "%d", &n );

    for( int i = 0; i <= n; i++ )
    {
	if( i % 2 == 0 )
	    printf("%d\n", i );
    }
    return 0;
}
