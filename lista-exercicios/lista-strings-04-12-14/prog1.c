/*
 *    1) Receba uma palavra, calcule quantas vogais (a, e, i, o, u) possui essa palavra. Entre com um
 *    caractere (vogal ou consoante) e substitua todas as vogais da palavra dada por esse
 *    caractere.
 */

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char word[100], vowels[]={'a','e','i','o','u'}, subs;
    int i, vlen[5];

    memset(vlen, 0, sizeof(vlen));

    printf("Digite uma palavra: ");
    fgets(word, 50, stdin);
    printf("Digite o caractere de susbstituição: ");
    scanf("%c", &subs);
    
    for(i = 0; i < strlen(word) - 1; i++)
    {
	if( word[i] == vowels[0])
	{
	    vlen[0]++;
	    word[i] = subs;
	}
	else if( word[i] == vowels[1])
	{
	    vlen[1]++;
	    word[i] = subs;
	}
	else if( word[i] == vowels[2])
	{
	    vlen[2]++;
	    word[i] = subs;
	}
	else if( word[i] == vowels[3])
	{
	    vlen[3]++;
	    word[i] = subs;
	}
	else if( word[i] == vowels[4])
	{
	    vlen[4]++;
	    word[i] = subs;
	}

    }

    fputs(word, stdout);
    for(i = 0; i < 5; ++i)
    {
	printf("%c = %d \n", vowels[i], vlen[i]);
    }

    return 0;
}
