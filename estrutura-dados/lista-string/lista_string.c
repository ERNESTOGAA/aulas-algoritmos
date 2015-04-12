#include"lista_string.h"

typedef struct {
	char** string;
	int capacidade;
	int qtde;
}Lista_string;

typedef enum 
{ 
	FALSE = 0,
	TRUE = 1,
}Bool; 

Lista_string* criar( unsigned int capacidade ) {

	Lista_string* l;
	l->capacidade = capacidade;

	return l;
}


/*
 *Bool inserir_fim( Lista_string* l, char* p )
 *{
 *  return 1; 
 *}
 *
 *Bool inserir_indice( Lista_string* l, char* p, int pos ){}
 *
 *char* remover_indice( Lista_string* l, int pos ){}
 *
 *int remover_string( Lista_string* l, char* p ){}
 *
 *char* busca_indice( Lista_string* l, int pos ){}
 *
 *int busca_string( Lista_string* l, char* p ){}
 *
 */
