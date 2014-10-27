/*
 *   10. Dados três valores, A, B, C, verificar se eles podem ser valores dos lados de um triângulo e, 
 *   se forem se é um triângulo escaleno, um triângulo equilátero o um triângulo isóscele. 
 *   Considerando os seguintes conceitos:
 *           • O comprimento de cada lado de um triângulo é menor do que a soma dos outros dois lados.
 *           • Chama­se equilátero o triângulo que tem três lados iguais.
 *           • Denominam­se isósceles o triângulo que tem o comprimento de dois lados iguais.
 *           • Recebe o nome de escaleno o triângulo que tem os três lados diferentes
 */
#include <stdio.h>

int main(){

	float a, b, c, total;
	printf("Digite os lados do triangulo separados por espaço: ");
	scanf("%f %f %f", &a, &b, &c );
	
	if ( a == b && a == c )
		printf("O triangulo é equilátero.\n");
	else if ( a == b || b == c || a == c )
		printf("O triangulo é isósceles\n");
	else
		printf("O triangulo é escaleno\n");


	return 0;
}
