/*  [Ex01]. Escreva uma função que crie dinamicamente um vetor de inteiros. A função deve inicializar o vetor com um valor informado por parâmetro e devolver seu endereço.
*  
*   int* criaVetor(int n, int valor)
*/

#include<stdio.h>
#include"./lib/pointer.h"


int main( int argc, char** argv )
{
	int n, valor;
	int* vetor;

	printf("Digite o tamanho e valor: ");
	scanf("%d %d", &n, &valor );

	vetor = (int*) createVector( n, valor );

	int i;
	for( i = 0; i < n; ++i )
	{	
		printf("[%d]->%d\n", i, vetor[i]);
	}

	return 0;
}
