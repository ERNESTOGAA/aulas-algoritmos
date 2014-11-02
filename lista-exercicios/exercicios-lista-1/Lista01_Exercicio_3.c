/*
 *   Faça um algoritmo que recebe o salário de um funcionário, calcula e
 *   mostra seu novo salário, sabendo que ele recebeu um aumento de 25%.
 */

#include <stdio.h>

int main(){
	
	float salario, newsalario;
	printf("\tCalculo de aumento salarial\n");
	
	printf("\tDigite o valor do salário: ");
	scanf("%f", &salario);
	newsalario = salario * 1.25;

	printf("\tO valor com aumento é: %.2f\n", newsalario);

	return 0;
}
