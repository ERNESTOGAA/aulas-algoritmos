/*
 *    10 - Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. Os
 *    dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o
 *    usuário, digite um numero que já foi digitado anteriormente, o programa devera pedir pra ele
 *    digitar outro. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando
 *    se ele já foi armazenado no vetor. Exibir na tela o vetor final.
 */
#include <stdio.h>

#define SIZE 10

int main(int argc, char *argv[])
{
    int v[SIZE], i, j;
    for (i = 0; i < SIZE; ++i)
    {
        printf("Digite um numero inteiro: ");
back:
	scanf("%d", &v[i]);
	for (j = 0; j < i; ++j)
	{
	    if (v[i] == v[j])
	    {
		printf("Ops, numero já existe, digite outro numero: ");
		goto back;
	    }
	}
    }

    for (i = 0; i < SIZE; ++i)
    {
	printf("%d\n", v[i]);
    }

    return 0;
}
