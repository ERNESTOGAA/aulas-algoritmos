/*  12. Faça um programa que calcule e mostre a soma dos 50 primeiros números pares.*/
#include <stdio.h>

int main()
{
    int i, counter = 50, total=0;
    
    for( i = 0; i < counter; i++ )
    {
	if( i % 2 !=0)	    
	    continue;
	else
	    total += i;
    }

    printf("O resultado da soma é: %d\n", total);

    return 0;
}

