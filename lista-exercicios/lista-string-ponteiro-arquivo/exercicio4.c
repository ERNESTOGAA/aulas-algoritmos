#include <stdio.h>
#include <string.h>

struct pessoa{
	char 	nome[50];
	float 	altura;
	float 	peso;
	int 	cpf;
	char 	sexo;
};

float imc( struct pessoa *p ){
	return p->peso / (p->altura * p->altura);
}

void cadastrar( struct pessoa *p ){

	printf("digite o nome: ");
	scanf("%s", p->nome );
	
	printf("Digite a altura: ");
	scanf("%f", &p->altura );
	
	printf("Digite o peso: ");
	scanf("%f", &p->peso );
	
	printf("Digite o CPF: ");
	scanf("%d", &p->cpf);
	
	printf("Digite o sexo: ");
	scanf("%c", &p->sexo );
}

void localizarCPF(int size, struct pessoa *p ){
	int cpf;
	printf("Digite o CPF: ");
	scanf("%d", &cpf);

	int i=0;
	for(; i<size; i++){
		if( p[i].cpf == cpf ){
		printf("IMC de %s eh %.2f\n",p[i].nome, imc( &p[i] ));
		}
	}
}
	
	

int main(){

	struct pessoa lista[5];

	int i=0;
	for(;i<5;i++){
		cadastrar( &lista[i] );
	}

	localizarCPF(5, lista );	
	

} 
