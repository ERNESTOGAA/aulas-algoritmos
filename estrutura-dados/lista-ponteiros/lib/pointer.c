#include "pointer.h"

int* createVector( size_t n, int valor )/*{{{*/
{
	int* vetor;

	if( (vetor = (int*) malloc( n * sizeof(int*))) == NULL )
	{
		return NULL;
	}
	else
	{
		int i;
		for( i = 0; i < n; ++i )
		{
			vetor[i] = valor;
		}
		return vetor;
	}
}/*}}}*/

int* createRandomVector( int n )/*{{{*/
{
	srand(time(NULL));

	int i, randomSize;
	int* vetor;

	//randomSize = rand() % n;
	randomSize = n;
	vetor = (int*) malloc( randomSize * sizeof(int*) );

	for( i = 0; i < randomSize; ++i )
	{
		vetor[i] = rand() % (3*n);
	}

	return vetor;
}/*}}}*/

void printIntVector( int* vector, size_t size )/*{{{*/
{
	int i;
	for( i = 0; i < size; ++i )
	{
		printf("[%d]-> %d\n", i, vector[i]);
	}
}/*}}}*/

int** createMatrix( size_t m, size_t n, int valor )/*{{{*/
{
	int i,j;
	int** matrix;

	if( (matrix = (int**) malloc( m * sizeof(int**) )) == NULL )
	{
		perror("Erro: ");
		exit(-1);
	} 

	for( i = 0; i < n; ++i )
	{
		*(matrix + i) = malloc( sizeof(int) );
	}

	for( i = 0; i < n; ++i )
	{
		for( j = 0; j < m; ++j )
		{
			matrix[i][j] = valor;
		}
	}

	return matrix;
}/*}}}*/

void printIntMatrix( int** matrix, size_t lines, size_t columns )/*{{{*/
{
	int i, j;
	for( i = 0; i < lines; ++i )
	{
		for( j = 0; j < columns; ++j )
		{
			printf("[%d][%d]-> %d\n", i, j, *(*matrix+i) );
		}
	}
}/*}}}*/

char* cloneString( char* string )/*{{{*/
{	
	char* newString = (char*) malloc(stringCount(string)*sizeof(char)+1);

	int i=0;
	while( string[i] !='\0' )
	{
		newString[i] = string[i];
		++i;
	}

	newString[i] = '\0';

	return newString;
}/*}}}*/

int stringCount( char* string )/*{{{*/
{
	int total=0;

	while( string[total] != '\0' )
	{
		++total;
	}

	return total;
}/*}}}*/

char* cropString( char* string, size_t begin, size_t end )/*{{{*/
{
	char* newString;
	int i,counter;

	if ( (counter = end - begin) > 0 )
	{
		newString = (char*) malloc( counter*sizeof(char*)+1 );
		for( i=begin; i < end; ++i )
		{
			newString[i-begin] = string[i];
		}
	}
	else
	{
		counter *= (-1);
		newString = (char*) malloc( counter*sizeof(char*)+1 );

		for( i = begin; i > end; --i )
		{
			counter = (i-begin)*(-1);
			newString[(counter)] = string[i-1];
		}

		newString[begin] = '\0';
	}

	return newString;
}/*}}}*/

char* subString( char* string, size_t index )/*{{{*/
{
	char* newString = NULL;;
	int lengh;

	lengh = stringCount(string);

	if( index > lengh )
	{
		printf("Erro de indice do vetor!\n");
		exit(-1);
	}

	return newString;
}/*}}}*/

int compareInt( void* a, void* b )/*{{{*/
{
	int* n1 = (int*)a;
	int* n2 = (int*)b;

	if( *n1 > *n2 )
	{
		return 1;
	}
	else if( *n2 > *n1 )
	{
		return (-1);
	}
	else
	{
		return 0;
	}
}/*}}}*/

int compareDouble( void* a, void* b )/*{{{*/
{
	double* n1 = (double*)a;
	double* n2 = (double*)b;

	if( *n1 > *n2 )
	{
		return 1;
	}
	else if( *n2 > *n1 )
	{
		return (-1);
	}
	else
	{
		return 0;
	}
}/*}}}*/

int compareString( void* a, void* b )/*{{{*/
{
	char* s1 = (char*)a;
	char* s2 = (char*)b;

	if( stringCount(s1) > stringCount(s2) )
	{
		return 1;
	}
	else if( stringCount(s2) > stringCount(s1) )
	{
		return (-1);
	}
	else
	{
		int lengh = stringCount(s1);
		int i=0;

		while( i <= lengh )
		{
			if( *(s1+i) == *(s2+i) )
			{
				++i;
			}
			else
			{
				return 1;
			}
			++i;
		}
		
		return 0;
	}
}/*}}}*/

int* joinVector( int* v1, size_t sizeV1, int* v2, size_t sizeV2 )/*{{{*/
{
	int* vfinal = (int*) malloc( (sizeV1+sizeV2)*sizeof(int*) );
	int i;

	for( i = 0; i < sizeV1; ++i )
	{
		*(vfinal+i) = *(v1+i);
	}
	
	for(; i < sizeV1+sizeV2; ++i )
	{
		*(vfinal+i) = *(v2+i-sizeV1);
	}

	return vfinal;
}/*}}}*/

void splitVector( int* vector, int limit, int vectorSize ) {}

void printString( char* string )/*{{{*/
{
	int i=0;

	printf("%s\n", string);

	while( string[i] != '\0' )
	{
		//putc(string[i], stdout);
		printf("%c", string[i]);
		++i;
	}
}/*}}}*/

void copyString( char* dest, char* src )/*{{{*/
{
		int i;
		int destSize = stringCount( dest );	
		int srcSize = stringCount( src );	

		if( srcSize > destSize )
		{
				exit(-1);
		}

		for( i = 0; i < srcSize; ++i )
		{
				dest[i] = src[i];
		}

		dest[i] = '\0';
}/*}}}*/

