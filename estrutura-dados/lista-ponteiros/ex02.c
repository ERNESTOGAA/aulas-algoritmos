/*   [Ex02]. Escreva uma função que crie dinamicamente um vetor de inteiros contendo números aleatórios. Afunção deve preencher o vetor com números aleatórios entre 0 e (3 * n) e devolver seu endereço.
   
   int* criaVetorAleatorio(int n)
 */

#include<stdio.h>
#include"./lib/pointer.h"


int main( int argc, char** argv )
{
	int n;
	int* vetor;

	printf("Digite um valor: ");
	scanf("%d", &n );

	vetor = (int*) createRandomVector( n );

	int i;
	for( i = 0; i < n; ++i )
	{	
		printf("[%d]->%d\n", i, vetor[i]);
	}

	return 0;
}
