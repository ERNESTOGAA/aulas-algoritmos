/*
   [Ex07]. Baseado no protótipo apresentado, escreva três versões da função. A primeira versão compara números inteiros, a segunda compara números reais e a terceira compara strings. As funções devem comparar dois elementos passados por parâmetro e devolver 1 se o primeiro elemento for maior que o segundo, -1 se for menor ou 0 se forem iguais.
   int compara_int(void* a, void* b)
   int compara_double(void* a, void* b)
   int compara_string(void* a, void* b)
   */
#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		int a=3, b=3;
		double c=12.34, d=12.34;
		char s1[]={"white"};
		char s2[]={"whijjtu"};

		printf("%d\n", compareInt(&a,&b) );
		printf("%d\n", compareDouble(&c,&d) );
		printf("%d\n", compareString(s1,s2) );

		return 0;
}
