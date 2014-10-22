#include <stdio.h>

int n1,n2,n3;

void media (int n1, int n2, int n3){
			int media;
			media = (n1 + n2 + n3) / 3;
			printf("A média é %d\n", media);
}

int main()
{

	printf("Digite 3 numeros para calcular a média: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	media(n1,n2,n3);
	return 0;	
}
