/*
 *  11. Faça um programa para ler as dimensões de um terreno (comprimento c e
 *  largura l), bem como o preço do metro do arame p, então fornecer como
 *  saída o custo para cercar este mesmo terreno.
 */

#include <stdio.h>

int main(){
	float c, l, p, total;
	printf("\tCálculo do Custo do Arame\n");
	printf("\tDigite as dimensões do terreno separados por espaços: ");
	scanf("%f %f", &c, &l);
	printf("\tDigite o custo por metro de arame: ");
	scanf("%f", &p);

	total = ( ( l * 2 ) + ( c * 2 ) ) * p;

	printf("\tPara cercar o terreno com arame voce gastará: R$%.2f\n", total );
	
	return 0;
}
