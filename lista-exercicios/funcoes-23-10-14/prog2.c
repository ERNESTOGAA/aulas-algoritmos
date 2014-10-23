#include <stdio.h>

int somatoria ( int n );

int main (){
	int n;
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	printf("A somatória de 1 a n é : %d\n", somatoria(n));
	
	return 0;	
}

int somatoria ( int n ){
	int i, resultado = 0;
	for( i = 1; i <= n; i++ ){
		resultado += i;
	}
	return resultado;
}

