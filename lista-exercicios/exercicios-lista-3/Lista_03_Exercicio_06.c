/*6. Faça um programa que peça para o usuário digitar 10 valores e some­os*/
#include <stdio.h>

#define N 10

int main()
{
    int num[N], soma;
    
    for( int i = 0; i < N; i++)
    {
	printf("Digite um numero [%d de %d]: ", i+1, N);
	scanf("%d", (num+i));
	soma += *(num+i);
    }
    printf("O resultado é %d\n", soma);


    return 0;
}
