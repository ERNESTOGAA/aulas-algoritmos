#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct _A
{
  long int ra;
  char nome[100];
  char curso[50];
  float notas[4];
} Aluno;

void trocaMatriz ( int **matriz )/*{{{*/
{
  int tmp, i = 0, j = 0;
  for (i = 0; i < 10; ++i)
  {
    tmp = matriz[1][i];
    matriz[1][i] = matriz[7][i];
    matriz[7][i] = tmp;
  }
  for (i = 0; i < 10; ++i)
  {
    tmp = matriz[i][3];
    matriz[i][3] = matriz[i][9];
    matriz[i][9] = tmp;
  }
  for (i = 0; i < 10; ++i)
  {
    for(j = 0; j < 10; ++j)
    {
      if (i == j)
      {
        tmp = matriz[i][j];
      }
      if (i + j == 9)
      {
        matriz[i][j] = tmp;
      }
    }
  }

}/*}}}*/

void mostrarAluno( Aluno aluno )
{
  float media = 0;
  int i;

  for (i = 0; i < 4; ++i)
  {
    media += aluno.notas[i]; 
  }
  media = media / 4.;

  printf("RA: %ld\n"
      "Nome: %s\n"
      "Curso: %s\n"
      "Notas: %.1f, %.1f, %.1f, %.1f\n"
      "Media: %.2f\n", aluno.ra, aluno.nome, aluno.curso, 
      aluno.notas[0], aluno.notas[1], 
      aluno.notas[2], aluno.notas[3], media);
} 

int main(int argc, char *argv[])
{
  srand(time(NULL));
  int **matriz, i, j;
  matriz = malloc(10*sizeof(int *));
  for (i = 0; i < 10; ++i)
  {
    matriz[i] = malloc(10 * sizeof(int));
  }

  for (i = 0; i < 10; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      matriz[i][j] = rand() % 11;
    }
  }

  Aluno aluno;
  strcpy(aluno.nome, "Henrique");
  strcpy(aluno.curso, "BCC");
  aluno.ra = 1647890;
  aluno.notas[0] = 3;
  aluno.notas[1] = 3;
  aluno.notas[2] = 3;
  aluno.notas[3] = 3;

  mostrarAluno( aluno );

  for (i = 0; i < 10; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  printf("\n\n\n");

  trocaMatriz( matriz );
  for (i = 0; i < 10; ++i)
  {
    for (j = 0; j < 10; ++j)
    {
      printf("%d\t", matriz[i][j]);
    }
    printf("\n");
  }
  return 0;
}
