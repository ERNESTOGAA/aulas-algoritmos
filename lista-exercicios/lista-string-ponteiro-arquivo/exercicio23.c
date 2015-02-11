/*
 *    23   ­   Faça   um   programa   que   receba   do   usuário   um   arquivo   texto   e   mostre   na   tela   quantas   letras  
 *    são vogais e quantas são consoantes. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char *argv[])
{
  char c, c_file, arquivo[20];
  FILE *fp;
  int vogais=0, consoantes=0;

  if( argc > 1 )
  {
    fp = fopen(argv[1], "r");
  }
  else 
  {
    printf("Erro de argumentos\n");
    return 1;
  }

  while(!feof(fp))
  {
    c_file = fgetc(fp);
    tolower(c_file);
    if( isalpha(c_file) && c_file != 'a' && c_file != 'e' && c_file != 'i' && c_file != 'o' && c_file != 'u' )
    {
      ++consoantes;
    }
    else if( isalpha(c_file) )
    {
      ++vogais;
    }

  }

  printf("consoantes: %d\n", consoantes);
  printf("vogais: %d\n", vogais);

  return 0;
}
