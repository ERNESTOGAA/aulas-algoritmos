/*
 *    16. Certo dia o professor de Johann Friederich Carl Gauss (aos 10 anos de idade) mandou que os alunos
 *    somassem os números de 1 a 100. Imediatamente Gauss achou a resposta – 5050 – aparentemente sem
 *    cálculos. Supõe­se que já aí, Gauss, houvesse descoberto a fórmula de uma soma de uma progressão
 *    aritmética.
 *    
 *    Construa uma algoritmo para realizar a soma de uma P.A. de N termos, com o primeiro a1 e o último an. O
 *    programa deve imprimir “A soma aritmética e: “.
 *    
 */
#include <stdio.h>

int main()
	{	
	int n, total;
	printf("Digite um número inteiro: ");
	scanf("%d", &n);
	
	total = ( ( 1 + n ) * n ) / 2;

	printf("A soma aritmética é: %d\n", total);

	
	return 0;
}
