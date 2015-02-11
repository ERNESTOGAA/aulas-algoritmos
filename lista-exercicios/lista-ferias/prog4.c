/*
 *    4­Escreva   um   programa   que   receba   uma   matriz   4x4   por   parâmetro   e   transforme   a   matriz   gerada  
 *    numa   matriz   triangular   inferior,   ou   seja,   atribuindo   zero   a   todos   os   elementos   acima   da   diagonal  
 *    principal. Imprimir a matriz original e a matriz transformada. 
 *
 */
      /*
       *   00 01 02
       *   10 11 12
       *   20 21 22
       */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 4
#define RAND 10

void m_lower_triangle( int arr[N][N] )
{
  int i,j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      if( i < j )
        arr[i][j] = 0;
    }
  }
}

int main(int argc, char **argv)
{
  int i,j, m[N][N];

  srand(time(NULL));

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
        printf("%d\t", m[i][j] );
    }
    printf("\n");
  }

  m_lower_triangle( m );

  printf("\n");
  
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
        printf("%d\t", m[i][j] );
    }
    printf("\n");
  }

  return 0;
}
