#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void multiplica (int *vetor, int constante, int tamanho){
	
	int i;
	
	for (i=0; i<tamanho; i++)
	{
	vetor[i] = vetor[i] * constante;
	}
	
}

int main() {

srand(time(NULL));
	
	int N, K;
	printf("Digite o valor de N e a constante K: ");
	scanf("%d %d", &N, &K);
	
	int vetor[N], i;
	
	printf("Vetor original: \n");
	for (i=0; i<N; i++)
	{
	vetor[i] = rand()%10;
	printf("%d\n", vetor[i]); 
	}

	multiplica(vetor, K, N);

	printf("\nVetor com a constante: \n");
	for (i=0; i<N; i++)
	{
	printf("%d\n", vetor[i]); 
	}
return(0);	
}
