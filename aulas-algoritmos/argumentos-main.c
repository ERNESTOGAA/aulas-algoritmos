#include <stdio.h>

int main( int argc, char **argv )
{
	int v[2];
	int i;
	for ( i = 0; i < argc; i++ )
	{
		v[i] = atoi( argv[i] );
	}

	for ( i = 1; i < argc; i++ )
	{
		printf("%d\n", v[i]);
	}

	return 0;
}
