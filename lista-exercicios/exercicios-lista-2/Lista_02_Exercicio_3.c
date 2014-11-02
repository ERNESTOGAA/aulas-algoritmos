/*
 *  3. Receber o salário de um trabalhador e o valor da prestação de um empréstimo, se a prestação for maior
 *  que 20% do salário imprima: Empréstimo não concedido, caso contrário imprima: Empréstimo concedido.
 */
#include <stdio.h>

int main(){
	float salario, prestacao;

	printf("\tDigite o valor do salário: ");
	scanf("%f", &salario );
	printf("\tDigite o valor da prestação: ");
        scanf("%f", &prestacao);

	if ( prestacao > ( salario * 0.20 ) )
		printf( "\tEmpréstimo não conedido.\n" );
	else
		printf( "\tEmpréstimo conedido.\n" );


	return 0;
}
