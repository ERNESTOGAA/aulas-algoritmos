/*
 *  19. Ler uma velocidade em m/s (metros por segundo) e apresenta­lá
 *  convertida em km/h (quilômetros por hora). A fórmula de conversão é: K =
 *  M ∗ 3.6, sendo K a velocidade em km/h e M em m/s.
 */
#include <stdio.h>

int main(){
	float speed, converted;

	printf( "\tDigite a velocidade em m/s: " );
	scanf( "%f", &speed );
	
	converted = speed * 3.6;

	printf("\tA velocidade em Km/h é de: %.2f Km/h\n", converted );
	
	return 0;
}
