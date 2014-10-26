/*
 *  10. Faça um programa que leia um número inteiro e imprimir a soma do
 *  sucessor de seu triplo com o antecessor de seu dobro
 */
#include <stdio.h>

int main (){
	int n, total;
	printf( "\tRetonar a soma do sucesso do triplo com o antecessor do dobro\n" );
	printf( "\tDigite um numero inteiro: " );
	scanf( "%d", &n );
	
	total = ( n * 3  + 1 ) + ( n * 2 - 1 );
	printf( "\tO resultado é: %d\n", total );

	return 0;
}
