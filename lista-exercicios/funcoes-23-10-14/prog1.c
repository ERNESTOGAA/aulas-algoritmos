#include <stdio.h>

int maior ( int x, int y );

int main(){
	int n1, n2;
	printf("Digite dois números separados por espaços: ");
	scanf("%d %d", &n1, &n2);
	printf("Entre %d e %d, o maior é %d\n", n1, n2, maior(n1,n2));
	return 0;
	
}

int maior ( int x, int y ){
	if ( x != y ){
		return ( x > y ? x : y );
	}
	else
		return x;
}
