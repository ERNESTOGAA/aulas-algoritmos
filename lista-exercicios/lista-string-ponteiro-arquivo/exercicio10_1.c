#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LOOP 100

struct endereco{
	char rua[20];
	int  numero;
	char complemento[10];
	char bairro[20];
	char cep[14];
	char cidade[30];
	char estado[2];
	char pais[10];
};

struct telefone{
	int ddd;
	int numero;
};
	
struct aniversario{
	int dia;
	int mes;
	int ano;
};

struct contato{
	char nome[20];
	char email[30];
	struct endereco end;
	struct telefone tel;
	struct aniversario aniversario;
	char obs[200];
};

void printContato( struct contato *c){ 
	printf("contato ! [Placeholder]\n");
};

void buscaPorNome( char *nome,struct contato *agenda, int range ){
	int i=0;
	for(; i<range; i++){
		if( strcmp( agenda[i].nome, nome) ==0){
			printContato( &agenda[i] );
		}
	}
}	

void buscaAniversarioMes( int mes,struct contato *agenda,int range){
	int i=0;
	for(; i<range; i++){
		if( agenda[i].aniversario.mes == mes ){
			printContato( &agenda[i] );
		}
	}
}

void buscaAniversario(int dia, int mes, struct contato *agenda, int range){
	
	int i=0;
	for(; i<range;i++){
		if( agenda[i].aniversario.dia == dia &&
			agenda[i].aniversario.mes == mes
		){
			printContato( &agenda[i] );
		}
	}
}
			
int menu( struct contato *agenda, int range ){
	printf("c - Buscar por nome\n");
	printf("d - Buscar Aniversariantes por mes\n");
	printf("e - Buscar Aniversariantes por dia\n");
	printf("f - Sair\n");

	char op;
	scanf("%c", &op );
	int mes;
	int dia;

	switch(op){
		case 'c':
			printf("Dgite o nome: ");
			char nome[20];
			scanf("%s", nome);
			buscaPorNome(nome,agenda,range);
			break;
		case 'd':
			printf("Digite o Mes: ");
			scanf("%d",&mes);
			buscaAniversarioMes(mes,agenda,range);
			break;
		case 'e':
			printf("Do mes e o dia: ");
			scanf("%d %d",&mes,&dia);
			buscaAniversario(dia,mes,agenda,range);
			break;
		case 'f':
			exit(0);
			break;
		default:
			break;
	}
}

int main(){
	struct contato agenda[LOOP];

	for(;;){
		menu( agenda, LOOP);
	}
return 0;
}		
