/*
 *    11. Escreva um programa em C que receba vários números e um valor N diferente de zero. Depois imprima
 *    na tela a quantidade de vezes que N foi digitado. O programa deve parar de ler quando for digitado 0.
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int *number = NULL, i = 0, repeat, counter=0, j, saida = 1;
   number = (int *)malloc( sizeof(int *) );
   
   do
   {
	 printf("Digite um numero inteiro positivo ou zero para sair: ");
	 scanf("%d", (number+i) );
	 number = realloc(number, sizeof(int *));
	 if ( number == NULL )
	 {	
	     printf("Erro de memória!\n");
	     exit(0);
	 }   
      i++;
      printf("\t\t\t%d\n", i);

   } while( *(number+(i-1)) != 0 );
    

   printf("Digite um número para saber quantas vezes ele foi digitado: ");
   scanf("%d", &repeat );

   for( j = 0; j <= i+1; j++ )
   {
      if( *(number+j) == repeat )
      {
	 counter++;
	 printf("\t\t\t%d\n", repeat );
      }
   }

   printf("O numero %d foi digitado %d vezes!\n", repeat, counter );
   free(number);
   
   return 0;
}
