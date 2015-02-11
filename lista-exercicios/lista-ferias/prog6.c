/*
 *   6­Na   teoria   dos   sistemas,   define­se   como   elemento   minimax   de   uma   matriz   o   menor   elemento   de  
 *   uma   linha   onde   se   encontra   o   maior   elemento   da   matriz.   Faça   uma   função   que   recebe,   por  
 *   parâmetro, uma matriz A(10,10) e retorna o seu elemento minimax, juntamente com a sua posição
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 10
#define RAND 100

int minimax ( int arr[N][N] )
{
  int i, j, line, maior = 0, minimax;

  for (i = 0; i < N; ++i)
  {
   for (j = 0; j < N; ++j)
   { 
     if( arr[i][j] > maior )
     {
       maior = arr[i][j];
       line = i;
     }
   } 
  }

  minimax = maior;
  
  for (i = 0; i < N; ++i)
  {
   if ( arr[line][i] < minimax )
    minimax = arr[line][i]; 
  }

  return minimax;
}

int main(int argc, char *argv[])
{
  srand(time(NULL));
  int m[N][N], i, j;

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
     printf("%d\t", m[i][j]); 
    }
    printf("\n");
  }

  printf("%d\n", minimax(m));

  return 0;
}
