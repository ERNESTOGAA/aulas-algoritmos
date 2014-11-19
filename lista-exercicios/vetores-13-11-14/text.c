#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n;
    printf("Digite um numero\n");
    scanf("%d", &n);
    
    int v[n];
    
    for( int i=0; i < n; i++ )
    {
	printf("%d\t", v[i]);
    }

    return 0;
}
