#include<stdio.h>

int main()
{
	int a,b,x;

	while( scanf("%d\n%d", &a, &b) != EOF )
	{
		x = a + b;
		printf("X = %d\n", x);
	}

	return 0;
}
