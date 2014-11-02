/*
 *   6. Escreva o menu de opções abaixo, leia a opção do usuário e execute a operação escolhida. Escreva uma
 *   mensagem de erro se a opção for inválida.
 *   Escolha a opção:
 *      1­ Soma de 2 números.
 *      2­ Diferença entre 2 números (maior pelo menor).
 *      3­ Produto entre 2 números.
 *      4­ Divisão entre 2 números (o denominador não pode ser zero).
 */
#include <stdio.h>

int n1,n2;
float total;

void soma() {

	printf("Digite dois numeros inteiros separados por espaços: ");
	scanf("%d %d", &n1, &n2 );
	total = n1 + n2;
	printf("O resultado é %.0f\n", total );
}

void diferenca(){

	printf("Digite dois numeros inteiros separados por espaços: ");
	scanf("%d %d", &n1, &n2 );
	total = n1 - n2;
	printf("O resultado é %.0f\n", total );
}
void produto(){

	printf("Digite dois numeros inteiros separados por espaços: ");
	scanf("%d %d", &n1, &n2 );
	total = n1 * n2;
	printf("O resultado é %.0f\n", total );
}
void divisao(){

	printf("Digite dois numeros inteiros separados por espaços: ");
	scanf("%d %d", &n1, &n2 );
	total = (float) n1 /  n2;
	printf("O resultado é %.2f\n", total );
}

int main(){
	int opt;
	printf("Digite um número para escolher alguma opção abaixo\n"
	       "\t1\tSoma de 2 números.\n"
	       "\t2\tDiferença entre 2 números ( maior pelo menor ).\n"
	       "\t3\tProduto entre 2 números.\n"
	       "\t4\tDivisão entre 2 números (o denominador não pode ser zero).\n"
	       ">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> ");
	scanf("%d", &opt);

	switch (opt){
		case 1:
			soma();
			break;
		case 2:
			diferenca();
			break;
		case 3:
			produto();
			break;
		case 4:
			divisao();
			break;
	
	}

	return 0;
}
