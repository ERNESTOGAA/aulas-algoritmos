/*
 *    19. Leia a nota e o número de faltas de um aluno, e escreva seu conceito. De acordo com a tabela abaixo,
 *    quando o aluno tem mais de 20 faltas ocorre uma redução de conceito.
 */
#include <stdio.h>
 
int main(){
    float nota, faltas;
    int reducao;
    char conceito[] = {'A', 'B', 'C', 'D', 'E'};
		       
    printf("\nCACULO DE CONCEITO DE ALUNOS\n");
    printf("Digite a nota e o numero de faltas separados por espaço: ");
    scanf("%f %f", &nota, &faltas);
    
    reducao = ( faltas > 20 ) ? 1 : 0;
				         
    if( nota >= 9.0 && nota <= 10.0 )
	    printf("O conceito é: %c\n", conceito[0 + reducao] );
    else if( nota >= 7.5 && nota <= 8.9)
	    printf("O conceito é: %c\n", conceito[1 + reducao] );
    else if( nota >= 5.0 && nota <= 7.4)
	    printf("O conceito é: %c\n", conceito[2 + reducao] );
    else if( nota >= 4.0 && nota <= 4.9)
            printf("O conceito é: %c\n", conceito[3 + reducao] );
    else if( nota >= 0.0 && nota <= 3.9)
	    printf("O conceito é: %c\n", conceito[4] );
    return 0;
}
