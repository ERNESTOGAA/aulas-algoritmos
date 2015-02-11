/*
 *    1­Escreva   uma   função   que   armazene   em   uma   matriz   C(nxn)   o   resultado   da   multiplicação   de   outras  
 *    duas matrizes A(nxn) e B(nxn).
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 3
#define RANDON 10

void multiplica(int arr1[N][N], int arr2[N][N], int total[N][N] )
{ 
  int i, j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
     total[i][j] = arr1[i][j] * arr2[i][j]; 
    }
  }
}

int main( int argc, char **argv )
{
  srand(time(NULL));

  int a1[N][N], a2[N][N], total[N][N];

  int i, j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      a1[i][j] = rand() % RANDON;
    }
  }

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      a2[i][j] = rand() % RANDON;
    }
  }

  multiplica( a1, a2, total );
  
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", total[i][j]);
    }
    printf("\n");
  }

  return 0;
}
