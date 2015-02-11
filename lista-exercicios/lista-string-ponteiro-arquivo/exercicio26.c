/*
 *    26   ­   Faça   um   programa   que   receba   dois   arquivos   do   usuário,   e   crie   um   terceiro   arquivo   com   o  
 *    conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo). 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char **argv)
{
  FILE * fp1; 
  FILE * fp2; 
  FILE * out;
  char c;

  out = fopen("prog26.txt", "w+");

  if ( argc > 2 )
  {
    fp1 = fopen( argv[1], "r"); 
    fp2 = fopen( argv[2], "r"); 
  }

  while(!feof(fp1))
  { 
    c = fgetc(fp1);
    fprintf( out, "%c", c );
  }

  fclose(fp1);
  
  while(!feof(fp2))
  { 
    c = fgetc(fp2);
    fprintf( out, "%c", c );
  }
  fclose(fp2);

  fclose(out);
  return 0;
}
