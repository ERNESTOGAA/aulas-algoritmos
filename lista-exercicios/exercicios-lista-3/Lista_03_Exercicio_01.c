/*
 *    24. Um funcionário recebe um aumento anual. Em 1995 foi contratado por 2000 reais. Em 1996 recebeu um
 *    aumento de 1.5%. A partir de 1997, os aumentos sempre correspondem ao dobro do ano anterior. Faca um
 *    programa que determine o salario atual do funcionário.
 *
 *    2000 * tx + 2000
 *
 */

#include <stdio.h>

int main(){
    float salario, aumento, total;
    int ano, i;

    salario = 1000;
    aumento = 1.5/100.0;
    salario = salario + (salario * aumento);
    ano = 1996;

while ( ano < 2014 ){
	ano++;
	printf("\t%.2f\t\t\t\t\t\t%d", salario, ano);
	aumento = aumento * 2;
	printf("\t%.2f\n", aumento );
	salario = salario + ( salario * aumento );
}
    
    return 0;    
}
