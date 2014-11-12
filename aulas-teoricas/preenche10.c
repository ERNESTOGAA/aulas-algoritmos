#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int v[10];

	srand(time(NULL));
	for (int i = 0; i < 10; ++i)
	{
		v[i] = 	rand();
	}
	
	for (int i = 0; i < 10; ++i)
	{
		if(v[i] % 2 == 0)
			printf("%d\n", v[i]);
		else
			continue;
	}

	return 0;
}
