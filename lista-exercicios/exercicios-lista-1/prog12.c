/*
 *  12. Implemente um programa em C que calcule o ano de nascimento de uma
 *  pessoa a partir de sua idade (passando anos e meses) e do ano e mês
 *  atual.
 */
#include <stdio.h>

int main (){
	int nano, nmes, mesatual, anoatual, total;
	printf("\tCalcula a idade de uma pessoa\n");
	printf("\tDigite o mês e ano atual separado por espaços: ");
	scanf("%d %d", &mesatual, &anoatual );
	printf("\tDigite o mês e ano do seu nascimento separado por espaços: ");
	scanf("%d %d", &nmes, &nano );

	total = ( ( ( anoatual * 12 ) + mesatual ) - ( ( nano * 12 ) + nmes ) ) / 12;
	printf("\tVoce tem %d anos.\n", total );



	return 0;
}
