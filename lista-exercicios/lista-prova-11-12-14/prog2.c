/*
 *    2. (Valor: 2.0). Faça uma função que receba as strings, s1, s2, s3. As strings s1 e s2 receberão duas palavras
 *    de no máximo 15 letras. Concatene estas duas palavras em uma única frase, com um espaço entre elas. Não
 *    use strcat. Imprima os resultados da concatenação (s3) na função principal main( ).
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

void concate( char *s1, char *s2, char *s3 )
{
    int i;
    for (i = 0; i < strlen(s1) - 1; ++i)
    {
	s3[i] = s1[i];
    }

    s3[i] = ' ';
    i++;
    for  (i = 0; i < strlen(s2); ++i)
    {
	s3[i+ strlen(s1)] = s2[i]; 
    }
}

int main(int argc, char *argv[])
{
    char s1[15], s2[15], *s3;

    printf("Digite uma palavra: ");
    fgets(s1, 15, stdin);
    setbuf(stdin, NULL);
    printf("Digite outra palavra: ");
    fgets(s2, 15, stdin);

    int tamanho;
    tamanho = (strlen(s2) - 1) + (strlen(s1) - 1);
    s3 = malloc( tamanho * sizeof(char));
    concate( s1, s2, s3 );

    fputs( s3, stdout);

    return 0;
}
