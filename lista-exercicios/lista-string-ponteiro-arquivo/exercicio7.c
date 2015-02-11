#include <stdio.h>
#include <string.h>

struct nomeGenerico{
	char titulo[30];
	char autor[15];
	int ano;


};
void cadastrar( struct nomeGenerico *p ){
printf("titulo[30] : ");
scanf("%s", p->titulo );

printf("autor[15] : ");
scanf("%s",p->autor );

printf("ano : ");
scanf("%d", &p->ano );

};

void print( struct nomeGenerico *p ){
printf("titulo[30] : %s ",p->titulo);
printf("autor[15] : %s ",p->autor);
printf("ano : %d ",p->ano);
}

int main(){
	struct nomeGenerico objeto[5];
	int i=0;
	for(; i<5; i++){
		cadastrar( &objeto[i] );
	}
	
	char titulo[30];
	printf("entre com o titulo: ");
	scanf("%s", titulo);
	i=0;
	for(; i<5; i++){
		if( strcmp( objeto[i].titulo, titulo ) == 0){
			print( &objeto[i] );
		}
	}


}//gerado por gen.c
