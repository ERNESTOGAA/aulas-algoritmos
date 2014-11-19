/*
 *    Exercício 2 ­ Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor.
 *    Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário
 *    digite um número que já foi digitado anteriormente, o programa devera pedir para ele digitar outro
 *    número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe
 *    entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado.
 */
#include <stdio.h>

int main(int argc, char *argv[])
{
    int v[10], i = 0;
    do {
back:
        printf("Digite um numero: ");
	scanf("%d", &v[i]);
	
	for( int j = 0; j < i; ++j )
	{
	    if(v[j] == v[i])
		goto back;
	}

	++i;

    } while(i < 10);

    for( int i = 0; i < 10; i++ )
    {
	printf("%d\t", v[i]);

    }

    printf("\n");
    return 0;
}
