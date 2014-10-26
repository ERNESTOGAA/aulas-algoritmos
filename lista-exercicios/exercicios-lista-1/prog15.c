/*
 *  15. Receber o salário­base de um funcionário, calcular e mostrar o salário a
 *  receber, sabendo­se que esse funcionário tem gratificação de 5% sobre o
 *  salário­base, e paga imposto de 7% sobre o salário­base.
 */
#include <stdio.h>

int main(){
	float salario, total;
	printf( "\tDigite o salário do funcionário: ");
	scanf( "%f", &salario ) ;
	total = ( salario * 1.05 ) - ( salario * 0.07 );
	
	printf( "\tO funcionario deve receber: R$%.2f\n", total );

	return 0;
}
