/*
 *  8. Faça um algoritmo que calcule a média ponderada das notas de 3 provas.
 *  A primeira e a segunda prova têm peso 1 e a terceira tem peso 2. Antes
 *  de o usuário entrar com as notas do aluno ele deve entrar com o número
 *  de matricula do aluno. Ao final, mostrar a matricula do aluno juntamente
 *  com a sua média e indicar se o aluno foi aprovado ou reprovado.
 */

#include <stdio.h>

int main(){
	int matricula;
	float n1, n2, n3, total;
	printf("\tCálculo de Média Ponderada\n");
	printf("\tDigite o número da matricula do aluno: ");
	scanf("%d", &matricula);
	printf("\tDigite as 3 notas das provas separadas por espaço: ");
	scanf("%f %f %f", &n1, &n2, &n3);
	
	total = ( n1 + n2 + ( 2 * n1 ) ) / ( 1.0 + 1.0 + 2.0 );
	printf( "\tO aluno %d, tem média %.2f e está %s\n.", matricula, total, (total >= 6)?"Aprovado":"Reprovado");	

	return 0;
}
