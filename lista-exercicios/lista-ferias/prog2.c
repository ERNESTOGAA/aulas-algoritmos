/*
 *  2­Declare   uma   matriz   5   x   5.Preencha   com   1   a   diagonal   principal,   com   2   a   diagonal   secundária   e  
 *  com 0 os demais elementos. Escreva ao final a matriz obtida. 
 */
#include<stdio.h>

#define N 5

int main(int argc, char *argv[])
{
  int i, j, m[N][N];
  
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      if( i == j )
      {
        m[i][j] = 1;
      }
      else if( i + j == N-1 )
      {
        m[i][j] = 2;
      } 
      else 
      {
        m[i][j] = 0;
      }
    }
  }

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", m[i][j]);
    } 
    printf("\n");
  }
  return 0;
}
