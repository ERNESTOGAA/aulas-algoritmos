/*
 *      21. Escreva um programa que leia um numero inteiro positivo n e em seguida imprima as linhas do chamado
 *      triangulo de Floyd:
 *      
 *      1
 *      2 3
 *      4 5 6
 *      7 8 9 10
 *      11 12 13 14 15
 *      16 17 18 19 20 21
 */
#include <stdio.h>

int main()
{
    int n, i, j, k=1, valor=1; 
    printf("Digite um numero inteiro: ");
    scanf("%d", &n );
    
    for(i=0;i<n;i++)
    {
	for(j=0;j<k;j++)
	{
	    printf("%d ", valor);
	    valor++;
	}

	k++;
	printf("\n");
    }

    return 0;
}
