#include <stdio.h>

long long int expo ( int n1, int n2 ) {
	
	long long int total = 1;
	int i;
	for ( i = n2; i > 0; i-- ){
		total *= n1;
	}
	return total;
}


int main(){
	int n1, n2;
	
	printf("Digite X e Y para calcular X^y - numeros separados por espaço: ");
	scanf("%d %d", &n1, &n2);
	printf("O resultado é: %lld\n", expo(n1,n2));
	
	return 0;
}
