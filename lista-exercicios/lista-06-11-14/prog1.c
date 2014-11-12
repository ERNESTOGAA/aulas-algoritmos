/*
 * Programa que imprime o numero de tomadas
 */

#include <stdio.h>

int main()
{
    int t1,t2,t3,t4, *n[4], notebooks=0, i=0;
    do
    {
    printf("Digite o número de tomadas separados por espaço: ");
    scanf("%d %d %d %d", (n+i));
    i++;
    } while( i < 4 && ( (*(n+i) < 2) && (*(n+i) > 6) ) );

    notebooks = (t1-1) + (t2-1) + (t3-1) + t4;

    printf("O número máximo de notebooks é: %d\n", notebooks );


    return 0;
}
