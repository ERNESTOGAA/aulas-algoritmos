/*
 *    27   ­   Faça   um   programa   que   receba   do   usuário   um   arquivo   texto   e   substitua   todas   as   vogais  
 *    contidas no arquivo por "*". 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
  FILE * fp;
  char vogal[] = {'a','e','i','o','u'};
  char c;

  if ( argc > 1 )
  {
    fp = fopen(argv[1], "r+"); 
  }
  else 
  {
    printf("Argumentos insuficientes!\n");
  }

  int i;
  while(!feof(fp))
  {
    c = fgetc(fp);
    for (i = 0; i < 5; ++i)
    {
      if(tolower(c) == vogal[i])
      {
        c = '*';
        fseek(fp,-1,SEEK_CUR);
        fprintf(fp, "%c", c );
      }
    }
    /*fprintf(stdout, "%c", c);*/
  }

  fclose(fp);

  return 0;
}
