/*7. Faça um algoritmo que leia um numero positivo e imprima seus divisores.*/
#include <stdio.h>

int main()
{
    unsigned int num, divisores;
    
    do
    {
    printf("Digite um numero natural: ");
    scanf("%d", &num);
    } while( num < 0 );

    for( int i = 1; i <= num; i++ )
    {
	for( int j = 1; j <= i; j++ )
	{
	    if( i % j == 0 )
		printf("%d\n", j);
	}
    }

    return 0;
}
