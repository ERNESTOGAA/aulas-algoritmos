#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct diretor{
	char 	nome[20];
	int  	qtdFilmes;
	struct 	filme *filmes;
};

struct filme{
	char 	nome[20];
	int 	ano;
	float 	duracao;
};

void cadastrarFilme  ( struct filme *f ){
	printf("Entre com o nome do filme: ");
	scanf("%s", f->nome);

	printf("Entre ano de estreia: ");
	scanf("%d", &f->ano);

	printf("Entre com a duracao: ");
	scanf("%f", &f->duracao);
}


void cadastrarDiretor( struct diretor *d ){
	printf("Entre com o nome do diretor: ");
	scanf("%s", d->nome);
	
	printf("Entre com a quantidade de filmes: ");
	scanf("%d", &d->qtdFilmes );

	d->filmes = malloc( d->qtdFilmes * sizeof( struct filme ) );

	int i=0;
	for(; i<d->qtdFilmes; i++ ){
		cadastrarFilme( &d->filmes[i] );
	}
}

void printFilme( struct diretor *d ){
	int i=0;
	for(; i<d->qtdFilmes; i++){
		printf("%s\n", d->filmes[i].nome);
	}
}

void findByName( char *str, struct diretor *d, int qtd ){
	int i=0;
	for(; i<qtd; i++){
		if( strcmp( d[i].nome, str ) == 0 ){
			printf("Filmes de %s: \n", d[i].nome );
			printFilme( &d[i] );
			exit(0);
		}
	}
	printf("Diretor nao encontrado\n");
}

int main(){

	struct diretor diretores[5];
	
	int i=0;
	for(; i<5; i++){
		cadastrarDiretor( &diretores[i] );
	}

	printf("digite um nome de diretor: ");
	char str[20];
	scanf("%s", str );

	findByName( str, diretores, 5 );

}	
