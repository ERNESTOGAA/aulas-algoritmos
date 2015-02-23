#include<stdio.h>
#include<math.h>

#define pi 3.14159

int main() 
{
	double r, a;
	while( scanf("%lf", &r) != EOF )
	{
		a = pi * pow(r,2);
		printf("A=%.4lf\n", a);
	}

	return 0;
}
