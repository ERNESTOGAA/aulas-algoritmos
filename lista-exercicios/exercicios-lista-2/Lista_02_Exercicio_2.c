/*
 *  2. Faça um programa para verificar se um determinado número inteiro e divisível por 3 ou 5, mas não
 *  simultaneamente pelos dois.
 */
#include <stdio.h>

int main (){
	int n;

	printf("\tDigite um número inteiro: ");
	scanf("%d", &n );

	if ( n % 3 == 0 && n % 5 != 0 )
		printf("\tO numero %d é divisivel somente por 3\n", n );
	else if ( n % 5 != 0 && n % 5 == 0 )
		printf("\tO número %d é divisivel somente por 5\n", n );
	else if ( n % 3 == 0 && n % 5 == 0 )
		printf("\tO número %d é divisilvel por 3 e por 5.\n", n );
	else
		printf("\tO número %d não é divisivel por 3 e nem 5.\n" , n );

	return 0;
}
