/*
   [Ex04]. Escreva uma função que faça uma cópia de string. A função deve criar dinamicamente a nova string ajustando o tamanho do vetor à quantidade necessária de caracteres e devolver seu endereço. Não use as funções da biblioteca string.h.
       char* clone(char* s)
*/
#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		char a[] = {"Teste de cópia!"};/*{{{*/
		char* b;

		b = (char*) cloneString( a );

		printf("String Original: %s\n", a );
		printf("String Copiada: %s\n", b );

		return 0;/*}}}*/
}
