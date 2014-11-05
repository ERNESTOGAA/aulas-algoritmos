/*
 *    8. Escreva um programa que leia vários valores, um de cada vez, e escreva para cada um dos valores lidos, o
 *    quadrado, o cubo e a raiz quadrada. Finalize a entrada de dados com um valor negativo ou zero.
 */
#include <stdio.h>
#include <math.h>
int main()
{
    float n;
    do
    {
	printf("Digite um número inteiro ou -1 para sair: ");
	scanf("%f", &n );
	if ( n > 0 )
	{
	    printf("O quadrado de %.0f é: %.2f\n", n, ( n * n ) );
	    printf("O cubo de %.0f é: %.2f\n", n, ( n * n * n ) );
	    printf("A raiz quadrada  de %.0f é: %.2f\n", n, sqrt( n ) );
	}

    } while ( n > 0 );

    return 0;
}
