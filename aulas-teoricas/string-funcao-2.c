
/*
 *	Faça um programa que contenha uma função
 *	que receba uma string que representa uma frase,
 *	e outra string que represente as vogais e um vetor
 *	que represente a somatória de cada vogal.
 *	Imprima este vetor fora da função.
 *
 */

#include <stdio.h>
#include <string.h>

void stringcount ( char *string, char *vowels, int *qtd )
{
	int i, size;
	size = strlen(string);
	for(i = 0; i < size - 1; i++)
	{
		if(string[i] == vowels[0])
			qtd[0]++;
		else if(string[i] == vowels[1])
			qtd[1]++;
		else if(string[i] == vowels[2])
			qtd[2]++;
		else if(string[i] == vowels[3])
			qtd[3]++;
		else if(string[i] == vowels[4])
			qtd[4]++;
	}
}

int main(int argc, char *argv[])
{
	char word[50];
	char vogais[5] = {'a','e','i','o','u'};
	int somatoria[5];

	setbuf(stdin, NULL);
	printf("Digite uma frase: ");
	fgets(word, 50, stdin);

	memset(somatoria, 0, sizeof(somatoria));
		
	stringcount(word, vogais, somatoria);
	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("letra %c = %d\n", vogais[i], somatoria[i]);
	}
	return 0;
}
