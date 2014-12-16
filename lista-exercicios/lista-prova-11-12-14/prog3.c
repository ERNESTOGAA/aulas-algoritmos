/*
 *    3. (Valor: 2,0). Considerando estruturas heterogêneas na linguagem C faça:
 *        a) Declare uma estrutura Funcionário para armazenar os dados: Nome, RG, CPF, Quantidade de Filhos
 *        e Salário, para uma empresa com 100 funcionários.
 *        b) Informe:
 *            a. A quantidade de Funcionários que tem o salário acima da média salarial desta empresa ;
 *            b. Os Funcionários que tem dois ou mais filhos e recebem salário menor que R$ 1.500.00.
 *            Imprimir estas informações em um arquivo texto (Nome – Qt. Filhos – Salário). Cada
 *            funcionário em uma linha.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define N 100

typedef struct funcionario
{
    char nome[50];
    int rg, cpf, filhos;
    float salario;
    struct funcionario *next;

} funcionario;

void imprime ( funcionario *funcionario )
{
    while( funcionario != NULL )
    {
	printf("RG: %d\n"
		"CPF %d\n",funcionario->rg, funcionario->cpf); 
	funcionario = funcionario->next;
    }
}

void cadastrarAway ( funcionario **func, FILE *nomes )
{
    funcionario *funcatual, *funcnovo;

    if( *func == NULL )
    {
	*func = malloc(sizeof(funcionario));
	fgets((*func)->nome, sizeof(funcionario), nomes);
	(*func)->nome[strlen((*func)->nome) - 1] = '\0';
	(*func)->rg = rand() % 10000;
	(*func)->cpf = rand() % 1000;
	(*func)->filhos = rand() % 3;
	(*func)->salario = rand() % 2000;
    }
    else
    {
	funcatual = *func;
	while( funcatual->next != NULL)
	    funcatual = funcatual->next;
	funcnovo = malloc(sizeof(funcionario));
	fgets(funcnovo->nome, sizeof(funcionario), nomes);
	funcnovo->nome[strlen(funcnovo->nome) - 1] = '\0';
	funcnovo->rg = rand() % 1000;
	funcnovo->cpf = rand() % 1000;
	funcnovo->filhos = rand() % 5;
	funcnovo->salario = rand() % 2000;
	funcatual->next = funcnovo;
    }
}

int main(int argc, char **argv)
{
    FILE *nomes;
    nomes = fopen("names.txt", "r" );

    FILE *dados = fopen( "dados.txt", "w");

    int i, contagem=0;
    float media = 0;
    srand(time(NULL));
    funcionario *func = NULL;
    funcionario *self;

    for (i = 0; i < N; ++i)
    {
	cadastrarAway(&func, nomes);
    }

    self = func;
    while(func != NULL)
    {
	media += func->salario;
	func = func->next;
    }
    media = media / 100.0;

    while(self != NULL)
    {
	if( self->salario > media )
	{
	    ++contagem;
	    printf("Nome: %s\n"
		    "Salário: %.2f\n",
		    self->nome, self->salario);
	}
	if (self->filhos >= 2 && self->salario < 1500)
	{
	    fprintf(dados, "%s %d %.2f\n", self->nome, self->filhos, self->salario);
	}
	self = self->next;
    }
    fclose(dados);

    printf("Média salarial: %.2f\n"
	    "%d ganham mais que a média!\n", media, contagem );

    while( self != NULL )
    {
	func = self->next;
	free(self);
	self = func;
    }


    return 0;
}
