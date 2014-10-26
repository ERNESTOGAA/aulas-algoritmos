/*
 *  16. Faça um programa que leia um número de 4 dígitos e informa se esse
 *  número é palíndromo.
 */
#include <stdio.h>

int main() {
	int numero, contrario, tmp;
	printf("\tDigite um numero de 4 digitos para saber se é palindormo: ");
	scanf("%d", &numero );
	
	contrario = 0;
	tmp = numero;
	while ( tmp !=0 ){
		contrario *= 10;
		contrario += (tmp % 10);
		tmp /= 10;
	
	}

	if ( contrario == numero )
		printf("\tO número %d é palindromo\n", numero );
	else
		printf("\tO número %d não é palindromo\n", numero );


	return 0;
}
