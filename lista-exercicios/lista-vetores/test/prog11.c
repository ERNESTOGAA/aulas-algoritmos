/*
 *    11 - Faça um programa que receba 6 números inteiros, e em seguida imprima os valores na ordem
 *    inversa.
 */
#include <stdio.h>

#define SIZE 6

int main(int argc, char *argv[])
{
    int v[SIZE], i;

    for (i = 0; i < SIZE; ++i)
    {
	printf("Digite um numero inteiro: ");
	scanf("%d", &v[i]);
    }
    
    for (i = SIZE - 1; i >= 0; --i)
    {
     printf("%d\n", v[i]);   
    }


    return 0;
}
