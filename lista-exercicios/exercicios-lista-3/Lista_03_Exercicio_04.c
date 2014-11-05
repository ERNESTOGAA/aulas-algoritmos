/*4. Faça um programa que some todos os números primos ente A e B*/
#include <stdio.h>

void swap ( int *x, int *y )
{
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(){
    int n1, n2, eval = 0;

    printf("Digite dois números separados por espaço: ");
    scanf("%d %d", &n1, &n2);
    
    ( n1 > n2 ) ? swap( &n1, &n2 ) : NULL;

    for( int i = n1; i <= n2; i++ )
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
	    printf("%d\n", i);
    }

    return 0;
}

