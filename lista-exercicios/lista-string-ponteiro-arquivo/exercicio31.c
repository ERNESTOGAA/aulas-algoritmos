/*
 *    31   ­   Escreva   um   programa   que   leia   a   profissão   e   o   tempo   de   serviço   (em   anos)   de   cada   um   dos  
 *    50   funcionários   de   uma   empresa   e   armazene­os   no   arquivo   “emp.txt”.   Cada   linha   do   arquivo  
 *    corresponde   aos   dados   de   um   funcionário.   Utilize   o   comando   fprintf().   Em   seguida,   leia   o  
 *    mesmo arquivo utilizando fscanf(). Apresente os dados na tela. 
 */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define N 3 

int main(int argc, char *argv[])
{
  FILE * fp = fopen("emp.txt", "w+");
  char profissao[50];
  int anos,i,pro;

  for (i = 0; i < N; ++i)
  {
    printf("Digite a profissão: ");
    setbuf(stdin, NULL);
    fscanf(stdin, "%[^\n]", profissao );
    setbuf(stdout, NULL);
    printf("Digite quanto tempo: ");
    setbuf(stdin, NULL);
    scanf("%d", &anos);
    setbuf(stdout, NULL);
    fprintf( fp, "%s\t%d\n", profissao, anos );
  }

  rewind(fp);

  for( i = 0; i < N; ++i )
  {
    fscanf(fp, "%[^\t]%d", profissao, &anos);
    printf( "%s\t%d", profissao, anos );
  }
  fclose(fp);
  printf("\n");

  return 0;
}
