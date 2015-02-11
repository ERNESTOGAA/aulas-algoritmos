#include <stdio.h>
#include <string.h>

struct nomeGenerico{
	char nome;
	int telefone;


};
void cadastrar( struct nomeGenerico *p ){
printf("nome : ");
scanf("%s", &p->nome );

printf("telefone : ");
scanf("%d", &p->telefone );

};

void print(FILE *fp, struct nomeGenerico *p ){
fprintf(fp,"nome : %s \n",p->nome);
fprintf(fp,"telefone : %d \n",p->telefone);
}

int main(){
	struct nomeGenerico objeto;

	FILE *fp = fopen("ListaTelefonica", "w");
	int i=0;
	for(; objeto.telefone != 0; ){
		cadastrar( &objeto );
		print( &fp, &objeto );
	}
	
	

}//gerado por gen.c
