/*
 *  4. Criar um programa em C que efetue o cálculo do salário líquido de um professor. Os dados fornecidos
 *  serão: valor da hora aula, número de aulas dadas no mês e percentual de desconto do INSS.
 */
#include <stdio.h>

int main(){
	float salario, aulahora, naula, inss;

	printf("\tDigite o valor da hora aula: " );
	scanf("%f", &aulahora );
	printf("\tDigite a quantidade de aulas dadas no mes: " );
	scanf("%f", &naula );
	printf("\tDigite o percentual de desconto do INSS: ");
	scanf("%f", &inss);

	salario = ( aulahora * naula ) * ( 1.0 - (inss / 100) );

	printf("\rO salário é de: %.2f\n", salario );

	return 0;
}
