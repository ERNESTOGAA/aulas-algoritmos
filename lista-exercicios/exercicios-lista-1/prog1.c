/*
 * Programa conversor de Celsius para Kevin
 *
 * Fórmula -> C = K - 273.15
 */

#include <stdio.h>

int main(){
	float n, temperatura;
	printf("\tConversor Kevin - Celsius\n");
	printf("\tDigite a temperatura em graus Kelvin: ");
	scanf("%f", &n );
	temperatura = n - 273.15;
	printf("A temperatura em Celsius é: %.1f\u00B0\n", temperatura );

	return 0;
}
