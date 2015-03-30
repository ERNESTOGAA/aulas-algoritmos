#include<stdio.h>
#include"./lib/pointer.h"

int* quadrado2( int a )
{
		int valor = a * a;
		return &valor;
}

int* quadrado( int a )
{
		int* valor = (int*)calloc(1, sizeof(int));
		*valor = a * a;
		return valor;
}

int main( int argc, char** argv )
{

		int a = 3;
		int* p;

		p = quadrado2(a);
		printf("%d\n", *p);

		p = quadrado(a);
		printf("%d\n", *p);
		return 0;
}
