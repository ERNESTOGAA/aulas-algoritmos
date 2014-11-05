/*
 *  14.Faça um programa que receba um inteiro N, e some todos os primos de 0 até N.
 */
#include <stdio.h>

int main()
{
    int n, i, j, eval, soma=0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    
    for( i = 2; i <= n; i++ )
    {
	eval = 0;
	for( j = 2; j <= i/2; j++ )
	{
	    if(i % j == 0)
	    {
		eval = 1;
	       	break;
	    }
	}
	if( eval == 0 )
	    soma += i;
    }
    printf("O resultado da soma é: %d\n", soma );

    return 0;
}

