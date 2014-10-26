/*
 * Uma empresa contrata um encanador a R$ 30,00 por dia. Crie um
 * programa que solicite o número de dias trabalhados pelo encanador e
 * imprima a quantia líquida que deverá ser paga, sabendo­se que são
 * descontados 8% para imposto de renda.
 */

#include <stdio.h>

int main(){
	int dia;
	float total;
	printf("\tCalculo Pagamento líquido\n");
	printf("\tDigite quantos dias de trabalho: ");
	scanf("%d", &dia );
	total = ( dia * 30.00 ) * 0.92;
	
	printf("\tO valor líquido a ser pago é de: R$%.2f \n", total );


	return 0;
}
