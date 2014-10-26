/*
 *  13. Criar um programa em C que leia dois valores para as variáveis A e B,
 *  que efetue a troca dos valores de forma que a variável A passe a ter o
 *  valor da variável B e que a variável B passe a ter o valor da variável A.
 *  Apresente os valores trocados.
 */
#include <stdio.h>

int main(){
	int n1, n2, tmp;
	printf("\tDigite dois numeros separados por espaços: ");
	scanf("%d %d", &n1, &n2 );
	
	tmp = n1;
	n1 = n2;
	n2 = tmp;

	printf("\tOs números trocados são: %d e %d\n", n1, n2 );


	return 0;
}
