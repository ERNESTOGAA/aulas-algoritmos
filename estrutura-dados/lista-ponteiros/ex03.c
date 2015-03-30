/*
    [Ex03]. Escreva uma função que crie dinamicamente uma matriz de inteiros. A função deve inicializar a matriz com um valor informado por parâmetro e devolver seu endereço.
*/

#include <stdio.h>
#include "./lib/pointer.h"

int main( int arg, char** argv )
{
		int m,n,valor;

		printf("Digite o tamanho da matrix e valor: m n valor \n");
		scanf("%d %d %d", &m, &n, &valor);

		int** matrix = createMatrix( m, n, valor);

		printIntMatrix( matrix, m, n );

		return 0;
}
