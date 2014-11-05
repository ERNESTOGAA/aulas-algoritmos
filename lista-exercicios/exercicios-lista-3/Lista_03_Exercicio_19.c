/*
 *   19. Escreva um programa em C que escreva na tela de 1 em 1, de 1 até 300, 3 vezes. A primeira vez deve
 *   usar a estrutura de repetição for, a segunda while, e a terceira do while.
 */
#include <stdio.h>

int main()
{
    int i;

    for( i = 0; i < 300; i++ )
    {
	printf("for: %d\n", i);
    }
    i = 0;

    while( i < 300 )
    {
	printf("while: %d\n", i);
	i++;
    }

    i = 0;

    do
    {
	printf("do-while: %d\n", i);
	i++;
    } while ( i < 300 );

    return 0;
}

