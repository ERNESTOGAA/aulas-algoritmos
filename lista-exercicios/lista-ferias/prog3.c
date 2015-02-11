/*
 * Leia uma matriz 4x4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.
 */
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define N 4
#define RAND 10

int main(int argc, char *argv[])
{
  srand(time(NULL));
  int m[N][N], i, j, maior = 0;

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      m[i][j] = rand() % RAND;
    }
  }

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      if( m[i][j] > maior )
      {
        maior = m[i][j];
      }
    }
  }
  
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", m[i][j] );
    }
    printf("\n");
  }
  printf("maior: %d\n", maior);


  return 0;
}
