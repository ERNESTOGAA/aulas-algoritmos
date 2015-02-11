/*
 *    22 ­ Escreva um programa que: 
 *        ● (a) Crie/abra um arquivo texto de nome “arq.txt” 
 *        ● (b)   Permita   que   o   usuário   entre   com   diversos   caracteres   nesse   arquivo,   até   que   o  
 *    usuário entre com o caractere '0'. 
 *        ● (c) Feche o arquivo. 
 *     
 *    Agora,   abra   e   leia   o   arquivo,   caractere   por   caractere,   e   escreva   na   tela   todos   os   caracteres  
 *    armazenados. 
 */
#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp = fopen("arq.txt", "w+");
  char c;

  while( c != '0' )
  {
    setbuf(stdin, NULL);
    fscanf(stdin,"%c",&c);
    setbuf(stdout, NULL);
    if( c == '0' )
      break;
    fprintf(fp, "%c", c);
  }

  rewind(fp);
  while(!feof(fp))
  {
    fscanf(fp,"%c",&c);
    fprintf(stdout, "%c", c );
  }
  fclose(fp);
  
  return 0;
}
