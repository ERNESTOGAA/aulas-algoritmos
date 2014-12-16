/*
 *    4) Faça um programa que preencha um vetor com os modelos de cinco carros. Carregue
 *    outro vetor com o consumo desses carros, isto é, quantos quilômetros cada um deles
 *    faz com um litro de combustível, calcule e mostre:
 *     
 *    ● O modelo de carro mais econômico;  
 *    ● Quantos litros de combustível cada um dos carros cadastrados consomem para
 *    percorrer uma distancia de 1.000 quilômetros.
 */
#include <stdio.h>
#include <string.h>
#define N 5

typedef struct
{
    char modelo[50];
    float consumo;
}carro;

int main(int argc, char **argv)
{
    carro carros[5], economico;
    int i;

    for (i = 0; i < N; ++i)
    {
	printf("Digite o modelo[%d de %d]: ", i+1, N);
	scanf("%s", carros[i].modelo);
	printf("Digite o consumo: ");
	scanf("%f", &carros[i].consumo);
    }

    economico = carros[0];

    for (i = 0; i < N; ++i)
    {
	if (carros[i].consumo > economico.consumo)
	{
	    economico = carros[i];
	}
    }

    printf("O carro %s é o modelo mais economico!\n", economico.modelo);

    for (i = 0; i < N; ++i)
    {
	printf("\t%s\t%.2f litros.\n", carros[i].modelo, ( 1000.0 / carros[i].consumo ) );
    }


    return 0;    
}
