/*
 *   8­Dizemos   que   uma   matriz   quadrada   inteira   é   um   quadrado   mágico   se   a   soma   dos   elementos   de  
 *   cada   linha,   a   soma   dos   elementos   de   cada   coluna   e   a   soma   dos   elementos   das   diagonais   principal   e  secundária   são   todas   iguais.   Dada   uma   matriz   quadrada   A(nxn),   verificar   se   A   é   um   quadrado  
 *   mágico. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define RAND 10

int main(int argc, char **argv)
{
  srand(time(NULL));
  int n = atoi(argv[1]);
  int m[n][n], soma_linha = 0, soma_coluna = 0, d_principal = 0, d_secundaria = 0, counter = 0;
  int i,j;

  for (i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      m[i][j] = rand() % RAND;
    }
  }

  for(i = 0; i < n; ++i)
  {
    for(j = 0; j < n; ++j)
    {
      if( i == j )
      {
        d_principal += m[i][j]; 
      }
      if( i + j == n-1 )
      {
        d_secundaria += m[i][j]; 
      }
    }
  }
  for(i = 0; i < n; ++i)
  {
    for (j = 0; j < n; ++j)
    {
      soma_linha += m[i][j];
      soma_coluna += m[j][i];
    }
    if( soma_linha == soma_coluna && soma_linha == d_principal && soma_linha == d_secundaria )
    {
      ++counter;
    }
    soma_linha = 0;
    soma_coluna = 0;
  }
  
  if ( counter == n )
  {
    printf("Essa matriz é um quadrado perfeito!\n");
  }
  else
  {
    printf("Essa matriz não é um quadrado perfeito!\n");
  }


  return 0;
}
