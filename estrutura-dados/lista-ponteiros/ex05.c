/*[Ex05]. Escreva uma função que extraia uma substring de uma string. A função deve criar dinamicamente o vetor que acomodará a substring e devolver seu endereço. O tamanho do vetor será definido pelo intervalo informado. A função deve validar o intervalo para certificar-se que ele existe, caso seja inválido a função deve devolver NULL.
		char* sub1(char* s, int inicio, int fim)
*/
#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		char string[] = {"Breaking Bad"};
		char* newString;
		int begin, end;

		begin = atoi(argv[1]);
		end = atoi(argv[2]);

		newString = cropString( string, begin, end );

		printf("%s\n", string);
		printf("%s\n", newString);

		return 0;
}
