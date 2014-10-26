/*
 *  9. Três amigos jogaram na loteria. Caso eles ganhem, o prêmio deve ser
 *  repartido proporcionalmente ao valor que cada deu para a realização da
 *  aposta. Faça um programa que lê quanto cada apostador investiu, lê o
 *  valor do prêmio, e escreve quanto cada um ganharia.
 */

#include <stdio.h>

int main(){
	
	float inv1, inv2, inv3, ganhototal, premio, ganhador1, ganhador2, ganhador3;
	printf("\n\tCálculo ganho na loteria\n");
	
	printf("\tDigite o valor de investimento de cada participante separado por espaços: ");
	scanf("%f %f %f", &inv1, &inv2, &inv3);
	
	printf("\tDigite o valor do prêmio: ");
	scanf("%f", &premio);
	
	ganhototal = premio / ( inv1 + inv2 + inv3 );
	ganhador1 = ganhototal * inv1;
	ganhador2 = ganhototal * inv2;
	ganhador3 = ganhototal * inv3;

	printf("\tO investidor 1 vai ganhar : %.2f\n", ganhador1);
	printf("\tO investidor 2 vai ganhar : %.2f\n", ganhador2);
	printf("\tO investidor 3 vai ganhar : %.2f\n\n", ganhador3);
	
	return 0;
}
