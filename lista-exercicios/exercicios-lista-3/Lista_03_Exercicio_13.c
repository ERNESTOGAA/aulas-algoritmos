/*
 *    13. Elabore um programa que faça leitura de vários números inteiros, até que se digite um numero negativo.
 *    O programa tem que retornar o maior e o menor numero lido.
 */
#include <stdio.h>

int main()
{
    int n=0, maior=0, menor;
    printf("Digite um numero ou um negativo para sair:");
    scanf("%d", &n);
    menor = n;
    while( n > 0 )
    {
	if ( n < menor )
	    menor = n;
	if ( n > maior )
	    maior = n;
	printf("Digite outro numero ou um negativo para sair: ");
	scanf("%d", &n);
    }
    
    printf("Maior numero: %d\n"
	   "Menor numero: %d\n", maior, menor);
    return 0;
}

