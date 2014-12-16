/*
 * Faça uma função que receba uma string e uma letra 
 * e conte quantas vezes esta letra se repete
 *
 */

#include <stdio.h>
#include <string.h>

int stringcount ( char *string, char letter )
{
	int i, size, c=0;
	
	size = strlen(string);
	for(i = 0; i < size - 1; i++)
	{
		if(string[i] == letter)
		{
			c++;
		}
	}
	return c;
}

int main(int argc, char *argv[])
{
	int x;
	char word[50], letra;

	printf("Digite uma letra: ");
	scanf("%c", &letra);
	setbuf(stdin, NULL);
	printf("Digite uma frase: ");
	fgets(word, 50, stdin);

	x = stringcount(word, letra);
	printf("A letra %c aparece %d vezes.\n", letra, x );

	return 0;
}
