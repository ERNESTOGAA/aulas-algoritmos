//Autor: WaGjUb (Daniel Costa Valerio)
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


void org(int *vet, int ordem){
	int i, aux=0, cont=0;

	//se liga nessa logica do mal huehue =D

	for (i=0; i<ordem; i++)
	{
		if (vet[i] == 0)
		{
		cont++;
		}
		else
		{
		aux = vet[i];
		vet[i] = vet[i-cont];
		vet[i-cont] = aux; 
		}
	}
}
int main(){	
	
	int ordem;
	srand(time(NULL));
	printf("Digite a ordem do vetor: ");
	scanf("%d", &ordem);	
	system("clear");

	int vetor[ordem], i;
	
	for (i=0; i<ordem; i++)
	{
	vetor[i] = rand()%10;
	printf("%d\n", vetor[i]);
	}
	
	org(vetor, ordem);
printf("\n");
	for (i=0; i<ordem; i++)
	{
	printf("%d\n", vetor[i]);
	}
return(0);
}
