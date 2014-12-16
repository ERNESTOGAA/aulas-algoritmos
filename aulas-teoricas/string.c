/*
 * Faça um programa que seja possivel inserir uma palavra de até 30 caracteres e demonstre:
 * 
 * 		a) A palavra invertida
 * 		b) Quantidade de letras 'aeiou'
 *
 * 1) Faça um programa que leia uma string de 50 caracteres e a imprima na tela
 * 2) Faça um programa que leia uma string e imprima as 4 primeiras letras
 * 3) Sem usar strlen faça um programa que leia uma string e imprima quantos caracteres ele tem.
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	char words[31], inverse[31];
	int i;

	printf("Digite alguma coisa:");
	fgets(words, 30, stdin);

	int j = 0;
	for (i = strlen(words)-2; i >= 0; --i)
	{
		inverse[j] = words[i];
		j++;
	}

	j++;
	inverse[j] = '\n';

	fputs(words, stdout);
	fputs(inverse, stdout);


	return 0;

}
