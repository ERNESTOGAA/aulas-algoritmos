/*
 *    20   ­   Escreva   um   programa   que   declare   um   array   de   inteiros   e   um   ponteiro   para   inteiros.   Associe  
 *    o   ponteiro   ao   array.   Agora,   some   mais   um   (+1)   a   cada   posição   do   array   usando   o   ponteiro   (use  
 *        *). 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10
#define RAND 10

int main(int argc, char *argv[])
{
  srand(time(NULL));
  int v[N];
  int *p, i;

  for (i = 0; i < N; ++i)
  {
    v[i] = rand() % RAND;
  }

  for (i = 0; i < N; ++i)
  {
    printf("%d\t", v[i]);
  }

  printf("\n");
  p = v;

  for( i = 0; i < N; ++i )
  {
    *(p++) += 1;
  }

  for (i = 0; i < N; ++i)
  {
    printf("%d\t", v[i]);
  }
  printf("\n");
  
  return 0;
}
