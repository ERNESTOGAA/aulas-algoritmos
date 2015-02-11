#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro{
	char 	nome[20];
	char 	identidade[12];
	char 	telefone[14];
	char 	cpf[14];
	int  	idade;
	float	salario;
	char 	estadoCivil[30];
	char 	sexo;
	struct endereco *end;
};

struct endereco{
	char	rua[50];
	char 	bairro[20];
	char	cidade[20];
	char	estado[2];
	char	CEP[11];
};

void cadastrarEndereco( struct endereco *e ){
	
	printf("Rua: ");
	scanf("%s", e->rua);
	printf("bairro: ");
	scanf("%s", e->bairro);
	printf("cidade: ");
	scanf("%s", e->cidade);
	printf("estado (2 letras): ");
	scanf("%s", e->estado);
	printf("CEP: ");
	scanf("%s",e->CEP);
}
void novoCadastro( struct cadastro *c ){
	printf("Nome: ");
	scanf("%s", c->nome);

	printf("Sexo f ou m: ");
	setbuf( stdin, NULL );
	(*c).sexo = getchar();
	//scanf("%c",&c->sexo);

	printf("RG: ");
	scanf("%s",c->identidade);
	printf("tel: ");
	scanf("%s",c->telefone);
	printf("CPF: ");
	scanf("%s",c->cpf);
	printf("Idade: ");
	scanf("%d",&c->idade);
	printf("Salario: ");
	scanf("%f",&c->salario);
	printf("Estado Civil: ");
	scanf("%s",c->estadoCivil);

	c->end = malloc( sizeof( struct endereco ) );
	cadastrarEndereco( c->end );
}

void printEndereco( struct endereco *e ){
	printf("rua: %s\tbairro: %s\n", e->rua,e->bairro);
	printf("cidade %s\testado %s\n", e->cidade,e->estado);
	printf("cep %s\n", e->CEP);
}

void printCadastro( struct cadastro *c){
	printf("nome %s\tidentidade %s\n",c->nome,c->identidade);
	printf("tel %s\tcpf %s\n",c->telefone,c->cpf);
	printf("cidade %d\tsalario %f\n",c->idade, c->salario);
	printf("estado civil %s\tsexo %c\n",c->estadoCivil,c->sexo);
	printEndereco( c->end );
}



int findOldest( struct cadastro *c ,int range){
	struct cadastro *d;
	int idade=0;
	int i=0;
	for(; i<range; i++){
		if( c[i].idade > idade ){
			idade = c[i].idade;
			d = &c[i];
		}
	}
	
	printf("%s eh a pessoa mais velha com %d anos\n", d->nome, d->idade);
	return d->idade;
}	
	
void males( struct cadastro *c, int range ){
	int i=0;
	for(; i<range; i++){
		if( c[i].sexo == 'm' ){
			printf("%s ", c[i].nome );
		}
	}
}

void highEarn( struct cadastro *c, int range ){
	int i=0;
	for(; i<range; i++){
		if( c[i].salario > 1000 ){
			printf("%s ", c[i].nome );
		}
	}
}

void findById( char *str, struct cadastro *c, int range ){
	int i=0;
	for(; i<range; i++){
		if( strcmp( c[i].identidade, str ) ==0){
			printCadastro( &c[i] );
		}
	}
}
			
	 

int main(){
	struct cadastro cadastros[2];
	
	int i=0;
	for(; i<2; i++){
		novoCadastro( &cadastros[i] );
	}
	
	printf("\nPessoa mais velha\n");
	findOldest( cadastros, 2 );

	printf("\nHomens\n");
	males( cadastros,2 );

	printf("\nSalario > 1000\n");
	highEarn( cadastros, 2 );

	printf("Digite a indentidade de alguem\n");
	char str[50];
	scanf("%s", str );
	findById(str, cadastros, 2 );
}

