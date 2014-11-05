/*5. Faça um programa que some todos os números primos menores que 2000.*/
#include <stdio.h>

int main()
{
    int numeros, eval, soma;
    numeros = 2000;
    
    for( int i = 2; i <= numeros; i++ )
    {
	eval = 0;
	for( int j = 2; j <= i/2; j++ )
	{
	    if(i % j == 0)
	    {
		eval = 1;
	       	break;
	    }
	}
	if( eval == 0 )
	{
	    soma += i;
	}
    }
    
    printf("O soma total é: %d\n", soma );
    
    return 0;
}
