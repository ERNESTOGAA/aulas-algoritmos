/*
 *  20. Converta uma letra maiúscula em letra minúscula Use a tabela ASCII.
 */

#include <stdio.h>

int main(){
	char letra;
	printf("\tDigite uma letra maiúscula: " );
	scanf("%c", &letra );

	printf("\tA letra é: %c\n", letra + 32 );
	return 0;
}
