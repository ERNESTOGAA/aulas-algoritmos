/*
 *	Crie um algoritmo que leia o valor do raio de um círculo e calcule a área do
 *	Círculo correspondente. A área do círculo é  raio * raio π , considere π = 3.141592.
 */

#include <stdio.h>

#define PI 3.141592


int main(){
	float raio, area;
	printf("\tCalculo da Área de uma Circunferência\n");
	printf("\tDigite a medida do raio: ");
	scanf("%f", &raio);
	area = ( raio * raio ) * PI;
	printf("\tA medida da área da circuferência é: %.2f\n", area);

	return 0;
}
