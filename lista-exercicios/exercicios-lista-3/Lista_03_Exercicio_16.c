/*
 *16 Faça um programa que determine o mostre os cinco primeiros múltiplos de 3, considerando numeros
 *maiores que 0.
 */
#include <stdio.h>

int main()
{
    int i;
    for(i=1; i<=5; i++)
    {
	printf("Valor: %d\n", (i*3));
    }
    return 0;
}
