/*
 *    24   ­   Faça   um   programa   que   receba   do   usuário   um   arquivo   texto   e   um   caractere.   Mostre   na   tela  
 *    quantas vezes aquele caractere ocorre dentro do arquivo. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[])
{
  char c, c_file, arquivo[20];
  FILE *fp;
  int contador=0, len=0;

  if( argc >= 3 )
  {
    setbuf(stdin,NULL);
    fp = fopen(argv[1], "r");
    c = argv[2][0];
    setbuf(stdout,NULL);
  }
  else 
  {
    printf("Numero insuficientes de argumentos!\n");
    return 1;
  }

  while(!feof(fp))
  {
    c_file = fgetc(fp);
    if( c == c_file )
    {
      ++contador;
    }

  }

  printf("%d\n", contador);

  return 0;
}
