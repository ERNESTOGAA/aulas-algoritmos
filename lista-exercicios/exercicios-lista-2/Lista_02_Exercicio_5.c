/*
 *  5. Escreva um algoritmo que leia um número inteiro. Se o número lido for positivo, escreva uma mensagem
 *  indicando se ele é par ou ímpar. Se o número for negativo, escreva a seguinte mensagem "Este número não é
 *  positivo".
 */
#include <stdio.h>

int main(){
	int n;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n);

	if( n > 0 ){
		if( n % 2 == 0 )
			printf("Esse numero é par\n");
		else
			printf("Esse numero é impar\n");
	}
	else
		printf("Esse numero não é positivo\n");


	return 0;
}
