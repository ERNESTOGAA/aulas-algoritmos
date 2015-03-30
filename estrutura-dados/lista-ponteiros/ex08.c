/*[Ex08]. Escreva uma função que intercale dois vetores já ordenados em um único vetor. A função deve MANTER a ordem crescente entre os elementos do vetor resultante.

		int* intercala1(int* v1, int tamV1, int* v2, int tamV2)
		
Escreva a mesma função, porém, considerando um único vetor. A separação dos dois vetores é baseada em um índice. Por exemplo, da posição 0-3 é um vetor e da 4-9 outro vetor. As alterações são realizadas no próprio vetor passado por parâmetro.
		void intercala2(int* vetor, int delimitador, int tamVetor)
*/
#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		int vector1[] = {1,2,3,4,5};
		int vector2[] = {6,7,8,9,10};
		
		int* vetorfinal = joinVector(vector1, 5, vector2, 5);

		printIntVector(vetorfinal, 10);

		return 0;
}
