#include <stdio.h>

int main(int argc, char *argv[])
{
	int n[10];
	printf("Digite 10 valores:");
	for(int i=0; i < 10; i++)
	{
		printf("Digite um valor [%d de 10]\n", i+1 );
		scanf("%d", &n[i]);
	}

	for(int i=9; i >= 0; i--)
	{
		printf("%d\n", n[i]);
	}

	return 0;

}
