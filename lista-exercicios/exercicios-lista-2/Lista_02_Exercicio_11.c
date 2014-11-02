/*
 *   11. Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa
 *   diferente de imposto sobre o produto (MG 7%; SP 12%; RJ 15%; MS 8%). Faça um programa em que o
 *   usuário entre com o valor e o estado destino do produto e o programa retorne o preço final do produto
 *   acrescido do imposto do estado em que ele será vendido. Se o estado digitado não for válido, mostrar uma
 *   mensagem de erro.
 */
#include <stdio.h>

int main (){
	float valor, preco;
	int  estado;
	
	printf("Digite o valor do produto: ");	
	scanf("%f", &valor);
	printf("Escolha um dos estados abaixo:\n"
	       "\t1\tMG\n"
	       "\t2\tSP\n"
	       "\t3\tRJ\n"
	       "\t4\tMS\n"
	       "\t>>>>>>>>> ");
	scanf("%d", &estado );

	switch ( estado ){
		case 1:
			preco = valor * 1.07;
			printf("Preço final: R$%.2f\n", preco);
			break;
		case 2:
			preco = valor * 1.12;
			printf("Preço final: R$%.2f\n", preco);
			break;
		case 3:
			preco = valor * 1.12;
			printf("Preço final: R$%.2f\n", preco);
			break;
		case 4:
			preco = valor * 1.12;
			printf("Preço final: R$%.2f\n", preco);
			break;
		default:
			printf("Digite apenas o numero que represente o  estado desejado!\n");
	}

	return 0;
}
