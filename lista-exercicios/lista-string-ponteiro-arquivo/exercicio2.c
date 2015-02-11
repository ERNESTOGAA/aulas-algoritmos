#include <stdio.h>
#include <string.h>

struct aluno{

	char nome[50];
	int  matricula;
	int nota[4];
};

void lerNota( int *nota ){
	int i=0;
	for(; i<4; i++){
		printf("Entre com a nota %d ", (i+1) );
		scanf("%d", &nota[i] );
	}
}

void lerAluno( struct aluno *a ){
	printf("Entre com o nome: ");
	scanf("%s", a->nome );
	
	printf("Entre com a matricula: ");
	scanf("%d", &a->matricula );

	lerNota( a->nota );
}

float media( int *nota ){
	return (float) (nota[0] + nota[1] + nota[2] + nota[3])/4;
}

void printAluno( struct aluno *a ){
	printf("Nome: %s\n" , a->nome);
	printf("RA: %d\n"   , a->matricula);
	if( media( a->nota ) > 5 ){ 
		printf("APROVADO\n");
	}else{
		printf("REPROVADO\n");
	}
}

int main(){
	struct aluno sala[5];
	
	int i=0;
	for(; i<5 ; i++){
		lerAluno( &sala[i] );
	}

	i=0;
	for(; i<5 ; i++){
		printAluno( &sala[i] );
	}
	
			
	
} 
