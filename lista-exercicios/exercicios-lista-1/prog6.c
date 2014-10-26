/*
 * 6. Faça um algoritmo que converta uma letra maiúscula em letra minúscula
 * caso essa letra seja maiúscula e que converta uma letra minúscula para
 * maiúscula caso essa letra seja minúscula. Use a tabela ASCII.
 */

#include <stdio.h>

int main(){
	char letra;
	printf("\tConversor Maisculo - Minusculo\n");
	printf("\tDigite uma letra qualquer: ");
	scanf("%c", &letra);
	if ( letra >= 65 && letra <= 90 ){
		letra += 32;
		printf("\tSua letra foi transformada em minuscula: %c\n", letra );
	}
	else if ( letra >= 97 && letra <= 122 ){
		letra -= 32;
		printf("\tSua letra foi transformada em maiuscula: %c\n", letra );
	}
	else{
		printf("\tVoce digitou algo errado.\n");
		return 0;
	}

	return 0;

}
