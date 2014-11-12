/*
 * Algoritmo 3n+1
 */
#include <stdio.h>
#include <stdlib.h>

int main( int argc, char **argv )
{
   long long int n1, n2, i, j, counter, total=0 , maior=0;
    /*
      printf("Digite dois números separados por espaço: ");
     *scanf("%d %d", &n1, &n2 );
     */
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]); 
    printf("%lld\n", n2);
    for( i = n1; i <= n2; i++ )
    {
	counter = 0;
	for( j = i; j != 1; )
	{
	   if(j < 0)
	   {
		printf("Número muito longo!");
		return 0;
	   }
	   if( j % 2 == 0 )
	    {
		j >>= 1;
		/*j = j/2;*/
	    }
	    else
	    {
		j = j * 3 + 1;
	    }
	    counter++;
	}
	if( total < counter )
	{
	    total = counter;
	    maior = i;
	}
    }
    
    printf("O numero com maior ciclos é %lld com  %lld ciclos\n", maior, total+1 );

    return 0;
}
