#include <stdio.h>

int imc( float peso, float altura );

int main(){
	float peso;
	float altura;
	
	printf("\n\nCalculo de IMC\n\n");
	printf("Digite o Peso(kg) e Altura(m) separdos por espaço: ");
	scanf("%f %f", &peso, &altura);
	printf("O IMC é: %d\n", imc(peso, altura));
	return 0;
}

int imc( float peso , float altura ){
	int res;
	res = peso / ( altura * altura );
	return res;
}
