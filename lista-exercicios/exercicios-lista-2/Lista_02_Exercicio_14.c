/*
 *     14. A nota final de um estudante é calculada a partir de três notas atribuídas respectivamente a um trabalho
 *     de laboratório, a uma avaliação semestral e a um exame final. A média das três notas mencionadas
 *     anteriormente obedece aos pesos: 
 *     	Trabalho de Laboratório:2; 
 *     	Avaliação Semestral: 3; 
 *     	Exame Final: 5
 *     E de acordo com o resultado mostre na tela se o aluno está reprovado (média entre 0 e < 3), de recuperação
 *     (entre 3 e < 5) ou se foi aprovado. Caso o aluno fique de recuperação o programa deve ler uma quarta nota
 *     (avaliação de recuperação) e calcular a média dessa nota com a média obtida anteriormente, se o estudante
 *     atingiu a média de aprovação com essa nova média ele está aprovado. Faça todas as verificações
 *     necessárias.
 */
#include <stdio.h>

int main(){
	float n1, n2, n3, rec, media;
	
	printf("Digite as 3 notas separadas por espaços: ");
	scanf("%f %f %f", &n1, &n2, &n3);

	media = ( (n1 * 2) + (n2 * 3) + (n3 * 5) ) / ( 2 + 3 + 5 );

	if ( media < 3 )
		printf("O aluno está reprovado!\n");
	else if ( media >=3 && media < 5 ) {
		printf("Digite a nota da prova de recuperação: ");
		scanf("%f", &rec );
		media = ( media + rec ) / 2.;
		if ( media > 5 )
			printf("O aluno foi aprovado!\n");
		else
			printf("O aluno foi reprovado!\n");
	}
	else
		printf("O aluno foi aprovado!\n");


	return 0;
}
