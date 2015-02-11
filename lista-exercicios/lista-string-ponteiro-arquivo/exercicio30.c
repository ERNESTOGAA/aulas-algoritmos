#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct dia{
	int dia;
	int mes;
	int ano;
};

int validaDia( int *dia ){
	if( *dia > 0 && *dia <31 ){
		return 1;
	}else{
		return 0;
	}
}

int validaMes( int *mes ){
	if( *mes > 0 && *mes < 13 ){
		return 1;
	}else{
		return 0;
	}
}

int validaAno( int *ano ){
	if( *ano > 0 ){
		return 1;
	}else{
		return 0;
	}
}
	
int validarData( struct dia *d ){
	if( validaDia( &d->dia ) == 1 && validaMes( &d->mes) == 1 && validaAno( &d->ano ) == 1 ){
		return 1;
	}else{
		return 0;
	}
}

struct dia *checkArgs( int *argc, char **argv ){
	if( *argc != 5 ){
		printf("Quantidade de argumentos invalida\n");
		printf("a.out arquivo_in dia mes ano\n");
		exit(0);
	}
	
	struct dia *d = malloc( sizeof( struct dia ) );
	d->dia = atoi( argv[2] );
	d->mes = atoi( argv[3] );
	d->ano = atoi( argv[4] );

	if( validarData( d ) == 1 ){
		return d;
	}else{
		printf("Data Invalida\n");
		exit(0);
	}
}

int idade( struct dia *d1, struct dia *d2 ){
	struct dia delta;
	delta.ano = d2->ano - d1->ano;
	//delta.mes = d2->mes - d1->mes;
	//delta.dia = d2->dia - d1->mes;
	
	//delta.mes += (int) delta.dia % 30;
	//delta.ano += (int) delta.mes % 12;
	
	int idade = delta.ano;
	return idade;
} 

int main(int argc, char *argv[]){

	char nome[50];
	struct dia tmp;
	struct dia *d =	checkArgs( &argc, argv );

	FILE *in = fopen( argv[1], "r" );
	FILE *out= fopen( "nomesEidades.txt" , "w");

	
	while( !feof( in ) ){
		fscanf(in,"%[^,],%d %d %d\n", nome, &tmp.dia, &tmp.mes, &tmp.ano);
		printf("n:%s, dia:%d, mes:%d, ano:%d\n",nome,tmp.dia,tmp.mes,tmp.ano);
		fprintf(out,"%s\t%d\n",nome, idade( &tmp, d ) );
	}

	fclose(in);
	fclose(out);
			
}	

