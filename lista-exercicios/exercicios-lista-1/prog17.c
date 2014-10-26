/*
 *  17. Em épocas de pouco dinheiro, os comerciantes estão procurando
 *  aumentar suas vendas oferecendo desconto. Faça um programa em C que
 *  possa entrar com o valor de um produto e imprima o novo valor tendo em
 *  vista que o desconto foi de 9%. Além disso, imprima o valor do desconto.
 */
#include <stdio.h>

int main(){
	float valor, desconto, total;
	printf("\tEntre com o valor do produto: ");
	scanf("%f", &valor);
	desconto = valor * 0.09;
	total = valor - desconto;
	
	printf("\tO novo preço é R$%.2f, o desconto foi de R$%.2f\n", total, desconto); 

	return 0;
}
