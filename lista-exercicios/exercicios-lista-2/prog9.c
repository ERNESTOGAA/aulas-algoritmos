/*
 *  9. Faça um programa que receba a altura e o peso de uma pessoa. De acordo com a tabela a seguir,
 *  verifique e mostra qual a classificação dessa pessoa.
 */
#include <stdio.h>

int main(){

	float peso, altura;
	printf("\tDigite seu peso e altura separados por espaço: " );
	scanf("%f %f", &peso, &altura );

	if ( altura < 1.20 ){
       		if ( peso <= 60 )
			printf("Classificação A\n");
		else if ( peso > 60 && peso <= 90 )
			printf("Classificação D\n");
		else if ( peso > 90 )
			printf("Classificação G\n");	
		}

	if ( altura >= 1.20 && altura < 1.70 ){
       
       		if ( peso <= 60 )
			printf("Classificação B\n");
		else if ( peso > 60 && peso <= 90 )
			printf("Classificação E\n");
		else if ( peso > 90 )
			printf("Classificação H\n");	
	
	}

	if ( altura > 1.70 ){
       
       		if ( peso <= 60 )
			printf("Classificação C\n");
		else if ( peso > 60 && peso <= 90 )
			printf("Classificação F\n");
		else if ( peso > 90 )
			printf("Classificação I\n");	

	}

	return 0;
}
