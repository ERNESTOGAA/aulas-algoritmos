#include <stdio.h>

long long int fatorial ( int numero );

int main () {

	int n;
	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	printf("O fatorial de %d é: %lld\n", n, fatorial(n));
	return 0;
}

long long int fatorial ( int numero ){
	int i;
	long long int total;
	if ( numero > 0 ){
		total = 1;
		for( i = 1; i <= numero; i++ ){
			total = total * i;
			}
		}
	else
		total = 0;
		
	return total;
}
