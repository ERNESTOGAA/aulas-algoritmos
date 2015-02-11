/*
 *    21   ­   Faça   um   programa   para   colocar   três   números   em   ordem   crescente   .   Deve   ter   uma   função  
 *    para fazer a troca dos valores, use passagem por referencia.  
 */
#include<stdio.h>
#include<stdlib.h>

void troca( int *v )
{
  int tmp,i,j;
  for (i = 0; i < 3; ++i)
  {
    for (j = i+1; j < 3; ++j)
    {
      if(v[i] > v[j])
      {
        tmp = v[j];
        v[j] = v[i];
        v[i] = tmp;
      }
    }
  }
}

int main(int argc, char *argv[])
{
  int v[3] = {3,5,2}, i;

  for (i = 0; i < 3; ++i)
  {
    printf("%d\n", v[i]);
  }

  troca( v );

  for (i = 0; i < 3; ++i)
  {
    printf("%d\n", v[i]);
  }

  return 0;
}
