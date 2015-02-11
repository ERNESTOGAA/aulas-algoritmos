/*
 *    19   ­   Implemente   uma   função   que   receba   como   parâmetro   um   array   de   números   reais   (VET)   de  
 *    tamanho   N   e   retorne   quantos   números   negativos   ha   nesse   array.   Essa   função   deve   obedecer  
 *    ao protótipo: 
 *        int negativos(float *vet, int N); 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10

int negativos( float *v, int n )
{
  int i, counter;
  for (i = 0; i < n; ++i)
  {
    if ( v[i] < 0 )
      counter++;
  }
  return counter;
}

int main(int argc, char *argv[])
{
  srand(time(NULL));
  float v[N];
  int i;

  for (i = 0; i < N; ++i)
  {
    v[i] = rand() % (N*2) - N;
  }

  printf("%d\n", negativos( v, N ));
  
  return 0;
}
