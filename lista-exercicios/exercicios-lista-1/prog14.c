/*
 *  14. Criar um programa em C que leia um valor de hora (hora:minutos) e
 *  informe (calcule) o total de minutos se passaram desde o início do dia
 *  (0:00h).
 */
#include <stdio.h>

int main(){
	int hora, minutos, totalminutos;

	printf("\tDigite o horário atual seguindo o padrão hh:mm : ");
	scanf("%d:%d", &hora, &minutos );

	totalminutos = ( hora * 60 ) + minutos;

	printf("\tJá se passaram %d minutos desde as 00h00.\n", totalminutos );


	return 0;
}
