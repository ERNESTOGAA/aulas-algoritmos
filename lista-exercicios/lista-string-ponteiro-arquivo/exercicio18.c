/*
 *    18   ­   Considere   a   seguinte   declaração:   int   a,*b,**c,***d;   Escreva   um   programa   que   leia   a   variável  
 *    "a"   e   calcule   e   exiba   o   dobro,   o   triplo   e   o   quadruplo   desse   valor   utilizando   apenas   os   ponteiros  
 *    b, c e d. O ponteiro b deve ser usada para calcular o dobro, c o triplo e d o quadruplo.
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  int a, *b, **c, ***d;

  a = 1;

  b = &a;
  c = &b;
  d = &c;

  printf("Original: %d\n", a);
  printf("%d\n", (*b) * 2);
  printf("%d\n", (**c) * 3);
  printf("%d\n", (***d) * 4);

  return 0;
}
