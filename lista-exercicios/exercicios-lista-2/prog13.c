/*
 *   13. Leia a distância em Km e a quantidade de litros de gasolina consumidos por um carro em um percurso,
 *   calcule o consumo em Km/l e escreva uma mensagem de acordo com a tabela abaixo:
 */
#include <stdio.h>

int main(){
	float distancia, litros, consumo;
	
	printf("Digite a distancia em Km: ");
	scanf("%f", &distancia );
	printf("Digite o consumo de gasolina em litros: ");
	scanf("%f", &litros );
	
	consumo = distancia / (float) litros ;
	
	if ( consumo < 8 )
		printf("Venda o carro!\n");
	else if ( consumo >= 8 && consumo <= 12 )
		printf("Econômino!\n");
	else if ( consumo > 12 )
		printf("Super Econômico!\n");


	return 0;
}
