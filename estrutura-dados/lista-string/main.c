#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define POS 2
#define CAPACIDADE 2
#define FATOR_REDUCAO 1.0

#define STUBBED(x) printf("STUBBED: %s\n", x)

// Structs and Functions/*{{{*/

typedef struct _listastring {/*{{{*/
  char** string;
  int capacidade;
  int qtde;
}Lista_string;

typedef enum _bool 
{ 
  FALSE = 0,
  TRUE = 1,
}Bool; /*}}}*/

// Verifica se é um indice válido

Bool validarIndice( Lista_string* l, size_t pos )/*{{{*/
{
  if ( pos > l->qtde )
  {
	return FALSE;
  }
  else
  {
	return TRUE;
  }
}/*}}}*/

// Duplicar a capacidade da string

void duplicar_capacidade( Lista_string* l )/*{{{*/
{
  if( l->qtde == l->capacidade )
  {
	l->capacidade *=2;
	char** tmp = (char**) malloc( l->capacidade * sizeof(char*) );

	int i;
	for( i=0; i < l->qtde; ++i )
	{
	  tmp[i] = l->string[i];
	}

	free( l->string );
	l->string = tmp;
  }

}/*}}}*/

// Reduzir a capacidade

void reduzir_capacidade( Lista_string* l )/*{{{*/
{
  if( (l->qtde / (float) l->capacidade) <= FATOR_REDUCAO )
  {
	char** tmp = (char**) malloc( l->qtde * sizeof(char*) );

	int i;
	for( i=0; i < l->qtde; ++i )
	{
	  tmp[i] = l->string[i];
	}

	free( l->string );
	l->capacidade = l->qtde;
	l->string = tmp;
  }

}/*}}}*/

// Busca uma string pelo idndice

char* busca_indice( Lista_string* l, int pos )/*{{{*/
{
  if( validarIndice( l , pos ) == FALSE )
  {
	return NULL;
  }
  char* string = (char*) malloc( strlen(l->string[pos]) * sizeof(char) );

  return string;

}/*}}}*/

// Busca uma string pela palavra

int busca_string( Lista_string* l, char* p )/*{{{*/
{ 
  int i; 

  for( i=0; i < l->qtde; ++i )
  {
	if( strcmp( p, l->string[i] ) == 0 )
	  return i;

  }
  return -1; 
}/*}}}*/

// Cria uma nova lista de string e zera seus valores

Lista_string* criar( int cap )/*{{{*/
{
  Lista_string* l = (Lista_string*) malloc( sizeof(Lista_string) );
  l->string = (char**) malloc( cap * sizeof(char*) );
  l->capacidade = cap;
  l->qtde = 0;

  return l;
}/*}}}*/

// Insere uma string ao final da lista

Bool inserir_fim( Lista_string* l, char* p )/*{{{*/
{

  duplicar_capacidade( l );

  int qtde = l->qtde;
  int plengh = strlen( p );
  l->string[qtde] = (char*) malloc( plengh*sizeof(char) + 1 );
  l->qtde++;

  strcpy( l->string[qtde], p );

  if( l->string[qtde] == NULL )
  {
	return FALSE;
  }
  else
  {
	return TRUE;
  }
}
/*}}}*/

// Insere uma string na posicao passada por parametro 

Bool inserir_indice( Lista_string* l, char* p, size_t pos )/*{{{*/
{
  if( validarIndice( l, pos ) == FALSE )
  {
	return FALSE;
  }

  duplicar_capacidade( l );

  if( pos < l->qtde )
  {
	int i = l->qtde;

	for( ; i > pos; --i )
	{
	  l->string[i] = l->string[i-1];
	}

	l->string[pos] = p;
	l->qtde++;

	return TRUE;
  }
  else
  {
	int plengh = strlen( p );
	l->string[pos] = (char*) malloc( plengh * sizeof(char) );
	strcpy( l->string[pos], p );
	l->qtde++;

	return TRUE;
  }

}/*}}}*/

// Remove uma string na posicao passada por parametro 

char* remover_indice( Lista_string* l, int pos )/*{{{*/
{
  if( validarIndice( l, pos ) == FALSE )
  {
	printf("Indice inválido!\n");
	return NULL;
  }

  reduzir_capacidade(l);

  int stringlengh = strlen( l->string[pos] );
  char* string = (char*) malloc( stringlengh * sizeof(char) + 1 );
  strcpy( string, l->string[pos] );

  if( pos < l->qtde )
  {
	int i = pos;
	for( ;i < l->qtde; ++i )
	{
	  l->string[i] = l->string[i+1];
	}

	l->qtde--;
  }
  else
  {
	l->qtde--;
	free( *(l->string+pos) );
  }

  return string;

}/*}}}*/

// Remove uma string pela palavra

int remover_string( Lista_string* l, char* p )/*{{{*/
{
  int pos;

  if( (pos = busca_string( l, p )) == -1 )
	return -1;

  remover_indice( l, pos );
  return 0;	
}/*}}}*/

// Imprime uma lista

void  imprime_lista( Lista_string* l )/*{{{*/
{
  int i;
  for( i=0; i < l->qtde; ++i )
  {
	printf("[%d/%d] de %d: %s\n", i, l->qtde, l->capacidade, l->string[i] );
  }
  printf("\n");
}/*}}}*//*}}}*/

int main() {

  char string[][255] = {
	"Run Forest!",
	"Hello World!",
	"alien",
	"bar",
	"foo",
	"Colocado por indice",
	"Colocado por indice2",
	"Colocado por indice3"
  };

  Lista_string* l = NULL;

  l = criar( CAPACIDADE );

  inserir_fim( l, string[0] );
  inserir_fim( l, string[1] );
  inserir_fim( l, string[2] );
  inserir_fim( l, string[3] );
  inserir_fim( l, string[4] );

  imprime_lista( l );

  inserir_indice( l, string[5], 2 );
  inserir_indice( l, string[6], 2 );

  imprime_lista( l );

  remover_indice( l, 0 );
  remover_indice( l, 0 );
  remover_indice( l, 0 );
  remover_indice( l, 0 );
  remover_string(l, "alien");

  imprime_lista( l );

  free(l);

  return 0;
}
