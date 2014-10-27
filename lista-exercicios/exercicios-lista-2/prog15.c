/*
 *    15. Uma empresa decide dar um aumento aos seus funcionários de acordo com uma tabela que considera o salário atual e o tempo de serviço de cada funcionário. Os funcionários com menor salário terão um aumento
 *    proporcionalmente maior do que os funcionários com um salário maior, e conforme o tempo de serviço na
 *    empresa, cada funcionário irá receber um bônus adicional de salário. Faça um programa que leia:
 *    • O valor do salário atual do funcionário;
 *    • O tempo de serviço deste funcionário na empresa (número de anos de trabalho na
 *                    empresa).
 *    Use as tabelas abaixo para calcular o salário reajustado deste funcionário e imprima o valor do salário final
 *    reajustado, ou uma mensagem caso o funcionário não tenha direito a nenhum aumento.
 */
#include <stdio.h>

int main (){
	float salarioatual, novosalario;
	int tempoempresa;

	printf("Digite o salário do funcionário: " );
	scanf("%f", &salarioatual );
	printf("Digite o tempo de trabalho em anos: ");
	scanf("%d", &tempoempresa);

	if( salarioatual <=  500.0 && tempoempresa < 1 )
	{	
		novosalario = salarioatual * 1.25;
	}
	else if( salarioatual <= 1000.0 && tempoempresa >= 1 && tempoempresa <= 3 )
	{
		novosalario = ( salarioatual * 1.20 ) + 100.0;
	}
	
	else if( salarioatual <= 1500.0 && tempoempresa >= 4 && tempoempresa <= 6 )
	{
		novosalario = ( salarioatual * 1.15 ) + 200.0;
	}

	else if( salarioatual <= 2000.0 && tempoempresa >= 7 && tempoempresa <= 10 )
	{
		novosalario = ( salarioatual * 1.10 ) + 300.0;
	}
		
	else if( salarioatual > 2000 )
	{
		novosalario = salarioatual + 500.0;
	}

	else
		printf("O funcinário não tem direito a reajuste\n");

	
	printf("O salario reajustado %.2f\n", novosalario );
	
	return 0;
}
