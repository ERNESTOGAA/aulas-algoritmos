/*
 *    3) Leia uma cadeia de caracteres no formato "DD/MM/AAAA" e copie o dia, mês e ano para 3
 *    variáveis inteiras. Antes disso, verifique se as barras estão no lugar certo, e se D, M e A são
 *    numéricos.
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 10

int main ( int argc, char **argv )
{

    char strdate[SIZE], dia[3], mes[3], ano[5];
    int diaInt, mesInt, anoInt;

    printf("Digite uma data no formato DD/MM/AAAA: ");
    fgets(strdate, 10, stdin);

    if(strdate[2] != 47 && strdate[5] != 47)
    {
	printf("Erro, voce digitou algo errado!\n");
	return 0;
    }
    else
    {
	dia[0] = strdate[0];
	dia[1] = strdate[1];
	dia[2] = '\0';
	mes[0] = strdate[3];
	mes[1] = strdate[4];
	mes[2] = '\0';
	ano[0] = strdate[6];
	ano[1] = strdate[7];
	ano[2] = strdate[8];
	ano[3] = strdate[9];
	ano[4] = '\0';

	diaInt = atoi(dia);
	mesInt = atoi(mes);
	anoInt = atoi(ano);
    }

    printf("dia: %d, mes: %d, ano: %d\n", diaInt, mesInt, anoInt);

    return 0;
}
