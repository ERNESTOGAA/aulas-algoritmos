/*
 *    1­Escreva   uma   função   que   armazene   em   uma   matriz   C(nxn)   o   resultado   da   multiplicação   de   outras  
 *    duas matrizes A(nxn) e B(nxn).
 */
#include <stdio.h>
#include <stdlib.h>

int ** multiplica( int **arr1, int **arr2 )
{
    int **total = malloc( sizeof( int *));
    

    return total;
}

int main( int argc, char **argv )
{

  int a1[3][3], a2[3][3];

  int i = 0;
  for (i = 0; i < 3; ++i)
  {
    for (i = 0; i < 3; ++i)
    {
      a1[i][i] = i;
    }
  }

  for (i = 0; i < 3; ++i)
  {
    for (i = 0; i < 3; ++i)
    {
      a2[i][i] = i;
    }
  }

  multiplica( a1, a2 );
  
  for (i = 0; i < 3; ++i)
  {
    
  }

  return 0;
}
