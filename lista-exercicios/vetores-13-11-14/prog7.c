/*
 *    Exercício 7 ­ Dado dois vetores de tamanho N informado pelo usuário e com números inseridos pelo
 *    mesmo, determine se os vetores são iguais ou diferentes (Escreva: Iguais, caso iguais, e diferentes caso
 *    forem diferentes).
 */
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   int *v, *u, n, counter=0;
   
   srand(time(NULL));
   
   printf("Digite o tamanho dos vetores: ");
   scanf("%d", &n );

   v = malloc( n * sizeof(int));
   u = malloc( n * sizeof(int));

   for( int i = 0; i < n ; i++ )
   {
       v[i] = rand() % 10;
       u[i] = rand() % 10;
   }
   
   printf("Vetor 1\n");
   for( int i = 0; i < n; i++)
   {
       printf("%d\n", v[i]);
   }
   
   printf("Vetor 2\n");
   for( int i = 0; i < n; i++)
   {
       printf("%d\n", u[i]);
   }

   for( int i = 0; i < n ; i++ )
   {
       if( v[i] != u[i] )
       {
	   printf("Os vetores são diferentes!\n");
	   break;
       }
       else
       {
	   counter++;
       }
   }
   
   if(counter == n)
   {
       printf("Os vetores são iguais\n");
   }

   return 0;
}
