/*15. Faça um algoritmo que encontre o primeiro múltiplo de 11, 13 ou 17 após um numero dado.*/
#include <stdio.h>

int main()
{
    int n, i;
    
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    for( i = 2; i <= n; ++i )
    {
	if( i % 11 == 0 )
	{
	    printf("%d  é multiplo de 11\n", i);
	    break;
	}
	else if( i % 13 == 0 )
	{
	    printf("%d é multiplo de 13\n", i);
	    break;
	}
	else if( i % 17 == 0 )
	{
	    printf("%d é multiplo de 17 \n", i);
	    break;
	}
    }

    return 0;
}
