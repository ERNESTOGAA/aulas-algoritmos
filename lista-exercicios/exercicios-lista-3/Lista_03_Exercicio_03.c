/*3. Escreva um programa que leia 10 números e imprima o menor valor lido e o maior valor lido.*/

#include <stdio.h>

int main() {

    int numeros[10], maior, menor, j, i;
    
    for( i = 0; i < 10; i++){
	printf("Digite um numero [%d de 10]: ", i);
	scanf("%d", &numeros[i]);
    }
    
    maior = numeros[0];
    menor = numeros[0];

    for( i = 1; i < 9; i++ ){
	if( maior < numeros[i] )
	    maior = numeros[i];
	if( menor > numeros[i] )
	    menor = numeros[i];
    }
    
    printf("O menor valor é: %d\n"
	   "O maior valor é: %d\n", menor, maior );

    return 0;
}
