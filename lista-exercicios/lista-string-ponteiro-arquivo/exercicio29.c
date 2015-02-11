/*
 *    29 ­ Faça um programa que receba um arquivo e retorne a quantidade de linhas deste arquivo.
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  FILE * fp; 
  if( argc > 1 )
  {
    fp = fopen(argv[1], "r");
  }
  else
  {
    fp = fopen("emp.txt", "r");
  }
  int i=0;
  char c;


  while(!feof(fp))
  {
    fscanf(fp,"%c", &c);
    if( c == '\n' )
    {
      ++i;
    }
  }

  printf("O arquivo tem %d linhas.\n", i-1);

  fclose(fp);
  return 0;
}
