/*
 * Faça uma função ( e programa ) que receba
 * uma frase e uma e uma palavra e verifique se
 * a palavra existe nesta frase.
 *
 */

#include <stdio.h>
#include <string.h>

int findword( char *string, char *word )
{
	int wordSize, stringSize, c=0;

	wordSize = strlen(word);
	stringSize = strlen(string);

	return c;
}

int main( int argc, char **argv )
{
	char frase[255], word[25];

	printf("Digite uma frase: ");
	fgets(frase, 255, stdin);
	printf("Digite uma palavra: ");
	fgets(word, 255, stdin);

	
	return 0;

}
