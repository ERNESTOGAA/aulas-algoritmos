/*
 *   28   ­   Faca   um   programa   no   qual   o   usuário   informa   o   nome   do   arquivo,   e   uma   palavra,   e   retorne  
 *   o numero de vezes que aquela palavra aparece no arquivo. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char palavra[20], str[20], arquivo[20];
  FILE *fp;
  int contador=0, len=0;

  if( argc >= 3 )
  {
    fp = fopen(argv[1], "r");
    strcpy( palavra, argv[2] );
  }
  else 
  {
    printf("Numero insuficientes de argumentos!\n");
  }

  while(!feof(fp))
  {
    fscanf(fp, "%s", str);
    if(strcmp(palavra, str) == 0)
    {
      ++contador;
    }

  }

  printf("%d\n", contador);

  return 0;
}
