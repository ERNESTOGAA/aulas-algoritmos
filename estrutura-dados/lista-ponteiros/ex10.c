/*[Ex10]. Escreva uma função recursiva que devolva o tamanho de uma string
		int comprimento_string(char* s)
*/
#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		char s1[] = "testing!";

		printf("%d\n", stringCount(s1));
		return 0;
}
