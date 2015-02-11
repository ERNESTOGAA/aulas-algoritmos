#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
transforma o tipo de dado numa sigla que pode ser
usado num printf
ex:
	toSigla( "char" ) -> %c
	toSigla( "str"  ) -> %s
	toSigla( "int"  ) -> %d
*/
char * toSigla( char tipo[] ){
	char *sigla = malloc( 9 * sizeof(char) );

	if( strcmp( tipo, "str" ) == 0 ){
		sigla = "%s";
		return sigla;
	}

	if( strcmp( tipo, "char" ) == 0 ){
		sigla = "%s";
		return sigla;
	}
	
	if( strcmp( tipo, "int" ) == 0 ){
		sigla = "%d";
		return sigla;
	}
		
	if( strcmp( tipo, "double" ) == 0 ){
		sigla = "%f";
		return sigla;
	}

	if( strcmp( tipo, "float" ) == 0 ){
		sigla = "%f";
		return sigla;
	}

}	
	

struct programa{
	char nome[50];
	int  usuarios;
	char **campo;
	char **ncampo;
	char **siglas;
};

/*
ordem dos argumentos
0 - nome do programa em execucao
1 - nome do programa que sera criado
2 - quantos usuarios para semrem cadastrados no loop
n - tipo do campo
n+1-Nome do campo
*/

int main( int argc, char *argv[] ){
	struct programa p;

	strcpy( p.nome, argv[1] );
	p.usuarios = atoi( argv[2] );
	
	int qtdCampo = (argc - 3)/2;

	//alocando a quantidade de campos
	p.campo = malloc( qtdCampo * sizeof(char) );
	p.ncampo= malloc( qtdCampo * sizeof(char) );
	p.siglas= malloc( qtdCampo * sizeof(char) );

	//preenchedo os vetores de capos
	int icampo=3;//iterador de campo
	int i=0; 
	for(; i<qtdCampo ; i++ ){
		p.campo[i] = argv[icampo];
		icampo++;
		p.ncampo[i] =argv[icampo];
		printf("%s",p.campo[i]);
		p.siglas[i] = toSigla( p.campo[i] );
		icampo++;
	}	
	
	//abrindo o arquivo
	FILE *arquivo = fopen( p.nome, "w");

	//escrevendo o programa

	fprintf(arquivo, "#include <stdio.h>\n");
	fprintf(arquivo, "#include <string.h>\n");
	fprintf(arquivo,"\n"); 
	fprintf(arquivo,"struct nomeGenerico{\n");

	//criando struct	
	i=0;
	for(; i<qtdCampo; i++){
	fprintf(arquivo,"	%s %s;\n", p.campo[i], p.ncampo[i] );
	}
	
	fprintf(arquivo,"\n"); 
	fprintf(arquivo,"\n");
	fprintf(arquivo,"};\n");

	//cadastro de struct
	fprintf(arquivo,"void cadastrar( struct nomeGenerico *p ){\n");

	i=0;
	for(; i<qtdCampo; i++){
		fprintf(arquivo,"printf(\"%s : \");\n",p.ncampo[i]);
fprintf( arquivo,"scanf(\"%s\", &p->%s );\n", p.siglas[i], p.ncampo[i]);
		fprintf(arquivo,"\n");   
	}

	fprintf(arquivo,"};\n"); 
	fprintf(arquivo,"\n");

	//imprime struct
	fprintf(arquivo,"void print( struct nomeGenerico *p ){\n");
	
	i=0;
	for(; i<qtdCampo; i++){
		fprintf(arquivo,"printf(\"%s : %s \\n\",p->%s);\n",p.ncampo[i], p.siglas[i],p.ncampo[i] );
	}

	//main cadasntrando "usuarios"-numero de objetos
	fprintf(arquivo,"}\n");  
	fprintf(arquivo,"\n");
	fprintf(arquivo,"int main(){\n");
	fprintf(arquivo,"	struct nomeGenerico objeto[%d];\n",p.usuarios);
	fprintf(arquivo,"	int i=0;\n");
	fprintf(arquivo,"	for(; i<%d; i++){\n", p.usuarios);
	fprintf(arquivo,"		cadastrar( &objeto[i] );\n");
	fprintf(arquivo,"	}\n");
	
	fprintf(arquivo,"\n");
	fprintf(arquivo,"}");
 	fprintf(arquivo,"//gerado por gen.c");


	//escrevendo o programa
//debug
	printf("nome %s\n", p.nome);
	printf("usuarios %d\n", p.usuarios);

	i=0;
	for(; i<qtdCampo ; i++ ){
		printf("ncampo %s\n", p.ncampo[i]);
		printf("campo %s\n",  p.campo[i] );
		printf("sigla %s\n",  p.siglas[i]);
	}	
//debug

}
