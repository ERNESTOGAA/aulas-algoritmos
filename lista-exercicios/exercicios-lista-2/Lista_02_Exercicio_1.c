/*
 *  1. Implemente um programa que leia um número real, se o número for positivo imprima a raiz quadrada,
 *  senão imprima o número ao quadrado.
 */
#include <stdio.h>
#include <math.h>

int main() {
	float n;
	
	printf("\tDigite um numero real: ");
	scanf("%f", &n );
	
	if ( n > 0 )
		printf("\tA raiz quadrada de %.0f é %.2f\n" , n,  sqrt(n) );
	else
		printf("\tO quarado de %.0f é %.2f\n", n, pow(n, 2) );	

	return 0;
}
