//5-Faça um programa que leia duas matrizes 3x3 com valores reais. Ofereça ao usuário um menu de opções: somar as duas matrizes, subtrair as 2 matrizes, adicionar uma constante as duas matrizes, imprimir as matrizes. Nas duas primeiras opções uma terceira matriz 3x3 deve ser criada. Na terceira opção o valor da constante deve ser lido e o resultado da adição da constante deve ser armazenado na própria matriz.
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define ORD 3



int verif=0;


void soma (int *mc1, int *mc2, int *mc3)
{
	verif++;
	int i, j;
	printf("\n");	
	for (i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{	
		mc3[(i*ORD)+j] = mc1[(i*ORD)+j] + mc2[(i*ORD)+j];
		}
	}
gets;	
}


void subtrai (int *mc1, int *mc2, int *mc3)
{
	verif++;
	int i, j;
	printf("\n");	
	for (i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{	
		mc3[i*ORD+j] = mc1[i*ORD+j] - mc2[i*ORD+j];
		}
	}	
}


void addk(int *cm1, int *cm2){
	
	int k, i, j;
	
	printf("Digite o valor da constante: ");
	scanf("%d", &k);
	
	for (i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{
		cm1[i*ORD+j] = cm1[i*ORD+j] + k;
		cm2[i*ORD+j] = cm2[i*ORD+j] + k;
		}
	}
	
	
}

void printa(int *cm1, int *cm2, int *cm3){
	
	int i, j;
	
	printf("\nMatriz 1:\n");
	for (i=0; i<ORD; i++)
         {
                 for (j=0; j<ORD; j++)
                 {
                 printf("%d ",cm1[i*ORD+j]);
                 }
         printf("\n");
         }

	printf("\nMatriz 2:\n");
	for (i=0; i<ORD; i++)
         {
                 for (j=0; j<ORD; j++)
                 {
                 printf("%d ",cm2[i*ORD+j]);
                 }
         printf("\n");
         }
	
	if (verif !=0)
	{
		printf("\nMatriz 3:\n");
		for (i=0; i<ORD; i++)
        	 {
        	       	  for (j=0; j<ORD; j++)
               		  {
               		  printf("%d ",cm3[i*ORD+j]);
			  }
       		  printf("\n");
	         }
	}
	
	
}





int main(){
system("clear");	
	srand (time(NULL));
	
	int m1[ORD][ORD], m2[ORD][ORD], m3[ORD][ORD], i, j, digitado;	
	
	//SORTEIA AS MATRIZES M1 E M2
	for (i=0; i<ORD; i++)
	{
		for (j=0; j<ORD; j++)
		{
		m1[i][j] = rand()%5;
		m2[i][j] = rand()%5;
		}
	}

	do
	{	
	        printf("---------- Digite o número da opção desejada ----------\n");
	        printf("|                                                     |\n");
	        printf("|         1 - Somar                                   |\n");
	        printf("|         2 - Subtrair                                |\n");
	        printf("|         3 - Adicionar uma constante                 |\n");
	        printf("|         4 - Imprimir as matrizes                    |\n");
	        printf("|         5 - Sair                                    |\n");
	        printf("|                                                     |\n");
	        printf("-------------------------------------------------------\n");	
		scanf("%d", &digitado);
		
		system("clear");
	
		switch (digitado)
		{
	
		case 1:	
		soma(&m1[0][0],&m2[0][0],&m3[0][0]);
		break;
	
		case 2:
		subtrai(&m1[0][0],&m2[0][0],&m3[0][0]);	
		break;	
	
		case 3:
		addk(&m1[0][0],&m2[0][0]);
		break;
	
		case 4:
		printa(&m1[0][0], &m2[0][0], &m3[0][0]);
		break;
		}
	}
	while (digitado != 5);
	
return(0);
}
