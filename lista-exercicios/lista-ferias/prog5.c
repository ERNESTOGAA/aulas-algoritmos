/*
 *    5­Faça um programa que leia duas matrizes 3x3 com valores reais. Ofereça   ao   usuário   um   menu   de  
 *    opções:   
 *            somar   as   duas   matrizes,   
 *            subtrair   as   2   matrizes,   
 *            adicionar   uma   constante   as   duas   matrizes,  
 *            imprimir   as   matrizes.
 *    Nas   duas   primeiras   opções   uma   terceira   matriz   3x3   deve   ser   criada.   
 *    Na terceira   opção   o   valor   da   constante   deve   ser   lido   e   o   resultado   da   adição   da   constante   deve   ser  
 *    armazenado na própria matriz. 
 */

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define N 3
#define RAND 10
#define CONST 100

void m_sum( int arr1[N][N], int arr2[N][N], int total[N][N] )/*{{{*/
{
  int i,j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      total[i][j] = arr1[i][j] + arr2[i][j];
    } 
  }
}/*}}}*/

void m_sub( int arr1[N][N], int arr2[N][N], int total[N][N] )/*{{{*/
{
  int i,j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      total[i][j] = arr1[i][j] - arr2[i][j];
    } 
  }
}/*}}}*/

void m_add_const( int arr1[N][N], int arr2[N][N], int constant )/*{{{*/
{
  int i,j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      arr1[i][j] = arr1[i][j] + constant;
      arr2[i][j] = arr2[i][j] + constant;
    } 
  }
}/*}}}*/

void m_print( int arr1[N][N], int arr2[N][N], int total_sub[N][N], int total_sum[N][N] )/*{{{*/
{
  int i,j;
  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", arr1[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", arr2[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", total_sum[i][j]);
    }
    printf("\n");
  }

  for (i = 0; i < N; ++i)
  {
    for (j = 0; j < N; ++j)
    {
      printf("%d\t", total_sub[i][j]);
    }
    printf("\n");
  }
}
/*}}}*/

int main( int argc, char **argv )
{
  srand(time(NULL));

  int m1[N][N], m2[N][N], total_sum[N][N], total_sub[N][N], i, j, menu, number;

  for( i = 0; i < N; ++i )
  {
    for( j = 0; j < N; ++j )
    {
      printf("Digite um numero [%d de %d]: ", j, N);
      scanf("%d", &m1[i][j]);
    }
  }

  for( i = 0; i < N; ++i )
  {
    for( j = 0; j < N; ++j )
    {
      printf("Digite um numero [%d de %d]: ", j, N);
      scanf("%d", &m2[i][j]);
    }
  }

  do
  {
inicio:
    printf("Digite uma opção do menu:\n"
        "0: Sair\n"
        "1: Somar duas Matrizes\n"
        "2: Subtrair duas Matrizes\n"
        "3: Adicionar uma constante\n"
        "4: Imprimir as matrizes\n");
    printf("Digite uma opção: ");
    scanf("%d", &menu); 
    switch (menu) 
    {
      case 0:
        return 0;
      case 1:
        m_sum(m1, m2, total_sum);
        break;
      case 2:
        m_sub(m1, m2, total_sub);
        break;
      case 3:
        m_add_const(m1, m2, number);
        break;
      case 4:
        m_print( m1, m2, total_sub, total_sum );
        break;
      default:
        goto inicio;
    }

  }while ( menu != 0 );


  return 0;
}

