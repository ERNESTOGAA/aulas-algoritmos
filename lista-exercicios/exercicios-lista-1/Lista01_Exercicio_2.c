/* Crie um programa para efetuar a leitura de três valores e apresentar como
   resultado final a soma dos quadrados dos três valores lidos.*/

#include <stdio.h>

int main(){
	int n1, n2, n3, total;
	printf("\tCálculo da Soma dos Quadrados\n");
	printf("\tDigite 3 números separados por espaço: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	total = (n1 * n1) + (n2 * n2) + (n3 * n3);
	printf("O Resultado é: %d\n", total);
	return 0;
}
