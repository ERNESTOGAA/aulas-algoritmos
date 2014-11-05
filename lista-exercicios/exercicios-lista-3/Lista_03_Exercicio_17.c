/*
 *17 Faça um programa que leia um numero inteiro N e depois imprima os N primeiros numeros naturais
 *impares.
 */
#include <stdio.h>

int main()
{
    int n, i;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    for( i = 0; i <= n; i++ )
    {
	if( i % 2 == 0 )
	    continue;
	else
	    printf("%d\n", i);
    }
    return 0;
}

