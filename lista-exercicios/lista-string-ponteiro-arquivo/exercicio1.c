#include <stdio.h>
#include <string.h>

struct aluno{

	char nome[50];
	int  matricula;
	char curso[50];
};

void lerAluno( struct aluno *a ){
	printf("Entre com o nome: ");
	scanf("%s", a->nome );
	
	printf("Entre com a matricula: ");
	scanf("%d", &a->matricula );

	printf("Entre com o curso: ");
	scanf("%s", a->curso );
}

void printAluno( struct aluno *a ){
	printf("Nome: %s\n" , a->nome);
	printf("RA: %d\n"   , a->matricula);
	printf("Curso: %s\n", a->curso);
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
