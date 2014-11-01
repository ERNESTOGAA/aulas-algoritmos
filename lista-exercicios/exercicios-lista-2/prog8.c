/*
 *  8. Faça um programa que receba três números e mostre­os em ordem crescente.
 */
#include <stdio.h>

int main(){
	int numeros[3], tmp, i, j;
	
	for ( i = 0; i < 3; i++ ){
		
		printf("\t[%d de 3] Digite um número inteiro: ", i+1);
		scanf("%d", &numeros[i] );

	}

	for ( i = 0; i < 3; i++ ){
		printf("%d\n", i);
		for ( j = 0; j < 3 - 1; j++ ){
			printf("\t%d\n", j);
			if ( numeros[j] > numeros[j + 1] ){
				tmp = numeros[j];
				numeros[j] = numeros[j + 1];
				numeros[j + 1] = tmp;
			}
		}
	}
	
	printf("Em ordem crescente: %d %d %d\n", numeros[0], numeros[1], numeros[2]);
	return 0;
}
