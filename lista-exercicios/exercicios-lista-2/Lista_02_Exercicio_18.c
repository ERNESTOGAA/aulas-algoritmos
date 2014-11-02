/*
 *  Imprime a comissão que deverá ser paga ao vendedor
 */
#include <stdio.h>

int main()
{
	float valorvenda, total;
	
	printf("Digite o valor da venda: ");
	scanf( "%f", &valorvenda );	

	if ( valorvenda >= 100000.00 )
		total = 700.00 + ( valorvenda * 0.16 );
	else if ( valorvenda < 100000.00 && valorvenda >= 80000.00 )
		total = 650.00 + ( valorvenda * 0.14 );
	else if ( valorvenda < 80000.00 && valorvenda >= 60000.00 )
		total = 600.00 + ( valorvenda * 0.14 );
	else if ( valorvenda < 60000.00 && valorvenda >= 40000.00 )
		total = 550.00 + ( valorvenda * 0.14 );
	else if ( valorvenda < 40000.00 && valorvenda >= 20000.00 )
		total = 500.00 + ( valorvenda * 0.14 );
	else if ( valorvenda < 20000.00 )
		total = 400.00 + ( valorvenda * 0.14 );

		printf("O valor a ser pago é R$%.2f\n", total );

	return 0;
}
