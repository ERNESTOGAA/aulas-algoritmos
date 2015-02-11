/*
 *    32   ­   Faça   um   programa   que   leia   um   arquivo   contendo   o   nome   e   o   preço   de   diversos   produtos  
 *    (separados por linha), e calcule o total da compra 
 */
#include<stdio.h>
#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
  float bill=0, total=0;
  char product[100];

  FILE * input_file = fopen( "prog32.txt", "r" );

  while(!feof(input_file))
  {
    fscanf(input_file, "%[^\t]%f\n", product, &bill);
    printf("Produto: %s\t%.2f\n",product, bill);
    total += bill;
  }
  printf("Total da Compra:\t%.2f\n", total);

  return 0;
}
