/*[Ex11]. Escreva uma função recursiva que faça cópia de uma string para outra.
		void copia_string(char* destino, char* origem)
*/
#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		char s1[] = "testing!";
		char s2[] = "tet";

		printf("s1:%s\ns2:%s\n", s1,s2);

		copyString( s1, s2 );
		
		printf("s1:%s\ns2:%s\n", s1,s2);

		return 0;
}
