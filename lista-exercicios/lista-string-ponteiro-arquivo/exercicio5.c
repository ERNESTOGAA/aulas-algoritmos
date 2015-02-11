#include <stdio.h>
#include <string.h>

typedef struct pessoa{
	char nome[20];
	char endereco[20];
	int telefone;
};

void cadastrar( pessoa *p ){
	printf("Nome: ");
	scanf("%s", p->nome );

	printf("Endereco: ");
	scanf("%s", p->endececo );
	
	printf("Telefone: ");
	scanf("%d", &p->telefone );
};

int acima( char str1[], char str2[] ){
	int loop;
	strlen( str1 ) > strlen( str2 ) ? loop = strlen( str1 ): loop = strlen( str2 );
	
	int i=0;
	for(; i<loop ; i++){
		if( str1[i] > str2[i] ){
			return 0


void printAlf(int size, pessoa *p ){
	pessoa tmp;

	int a = 'a';
	int i = 0;
	for(; i<(size-1) ; i++){
		int j = i+i;
		for(; j<size ; j++ ){
			if( acima( p[i].nome, p[j].nome ) == 1 ){
			//ja esta alfabeticamente ordenado
			}else{
				tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
}
			

int main(){

	pessoa p[5];

	int i=0;
	for(; i<5 ; i++){	
		cadastrar( &p[i] );
	}

	 


} 
