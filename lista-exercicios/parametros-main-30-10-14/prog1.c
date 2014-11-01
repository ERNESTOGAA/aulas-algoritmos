/*
 *   Exercício 01.: Faça um programa que leia 1 número inteiro positivo ( Número digitado que representa a
 *   Média desejada) e três valores que correspondem as notas de um aluno. Efetue o cálculo de uma das
 *   seguintes médias de acordo com um valor numérico digitado pelo usuário mostrado na tabela a seguir. Crie
 *   uma função para cada tipo de Média.
 */
#include <stdio.h>
#include <math.h>

float geometrica ( float x, float y, float z ){
    float total;
    total = pow(( x * y * z), (1./3.));
    return 0;
}

float ponderada ( float x, float y , float z ){
    float total;
    total = (x + ( 2 * y ) + ( 3 * z )) / 6;
    return total;
}

float harmonica ( float x, float y , float z ){
    float total;
    total = 1 / (1 / x) + (1 / y) + (1 / z);
    return total;
}
float aritmetica ( float x, float y , float z ){
    float total;
    total = (x + y + z)/ 3;
    return total;
}


int main( int argc, char **argv ){
   
    int opt;
    float n1, n2, n3;
    
    opt = atoi(argv[1]);
    n1 = atoi(argv[2]);
    n2 = atoi(argv[3]);
    n3 = atoi(argv[4]);

    switch ( opt )
    {
	case 1:
	    printf("\tTotal\t%.2f\n",  geometrica( n1, n2, n3 ));
	    break;
	case 2:
	    printf("\tTotal\t%.2f\n",  ponderada( n1, n2, n3 ));
	    break;
	case 3:
	    printf("\tTotal\t%.2f\n",  harmonica( n1, n2, n3 ));
	    break;
	case 4:
	    printf("\tTotal\t%.2f\n",  aritmetica( n1, n2, n3 ));
	    break;
    }	

    return 0;
}
