#include <stdio.h>

float serie( int numero ) {
	int i; 
	float res = 0;
	for( i = numero; i > 0; i-- ){
		res += (((i * i) + 1.0) / ( i + 3.0));
	}
	return res;
}

int main(){
	int n;
	
	printf("Calculo da Série S\n");
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	
	printf("O resultado da série é: %f\n", serie(n));

	return 0;
}
