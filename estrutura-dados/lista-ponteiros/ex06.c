/*
[Ex06]. Escreva uma função que extraia uma substring de uma string. A função deve criar dinamicamente o vetor que acomodará a substring e devolver seu endereço. O tamanho do vetor será definido pela distância entre o índice informado e o fim da string. A substring inicia no índice informado e termina no último caractere.
O índice pode ser positivo ou negativo. Quando negativo, o índice deve ser considerado do fim para o inicio.
Por exemplo, considerando uma string com N caracteres, o índice -1 é N-1, -2 é N-2, -3 é N-3 e assim por diante. A função deve validar as entradas e devolver NULL se não for possível extrair a substring.
		char* sub2(char* s, int indice)
*/

#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		char string[] = {"Led Zeppelin"};
		int begin, end;
		begin = atoi(argv[1]);
		end = atoi(argv[2]);
		char* newstring = cropString( string, begin, end );

		printf("%s\n", newstring);

		return 0;
}
