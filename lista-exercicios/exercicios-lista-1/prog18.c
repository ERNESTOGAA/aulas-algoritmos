/*
 *  18. um cercado contem patos e coelhos. faça um programa que solicita o
 *  total de cabeças e o total de patas, e escreve quantos patos e quantos
 *  coelhos existem no cercado
 */
#include <stdio.h>

int main (){
	int cabeca, patas, tpatos, tcoelhos;
	printf( "\tDigite a quantidade de cabeças " );
	scanf( "%d", &cabeca );
	printf( "\tDigite a quantidade de patas: " );
	scanf( "%d", &patas );
	
	tpatos = cabeca;
	tcoelhos = patas / 4;

	printf( "\tO numero é de patos é %d, e o numero de coelhos %d\n", tpatos, tcoelhos );
	return 0;
}
