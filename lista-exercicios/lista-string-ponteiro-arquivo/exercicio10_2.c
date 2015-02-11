#include <stdio.h>
#include <string.h>

struct nomeGenerico{
	int codigo;
	char nome[15];
	float preco;
	int quantidade;


};

struct pedido{
	int codigo;
	int quantidade;
};

void lerPedido( struct pedido *p ){
	printf("codigo : ");
	scanf("%d", &p->codigo );
	printf("quantidade : ");
	scanf("%d", &p->quantidade );
};

void cadastrar( struct nomeGenerico *p ){
printf("codigo : ");
scanf("%d", &p->codigo );

printf("nome : ");
scanf("%s", p->nome );

printf("preco : ");
scanf("%f", &p->preco );

printf("quantidade : ");
scanf("%d", &p->quantidade );

};

void print( struct nomeGenerico *p ){
printf("codigo : %d \n",p->codigo);
printf("nome : %s \n",p->nome);
printf("preco : %f \n",p->preco);
printf("quantidade : %d \n",p->quantidade);
}

int main(){
	struct nomeGenerico objeto[5];
	int i=0;
	for(; i<5; i++){
		cadastrar( &objeto[i] );
	}

	struct pedido p;
	p.codigo=1;
	
	while( p.codigo != 0 ){
		lerPedido( &p );
		i=0;
		for(;i<5;i++){	
			if( p.codigo == objeto[i].codigo ){
				objeto[i].quantidade -= p.quantidade;
				printf("ha %d %s em estoque\n",objeto[i].quantidade, objeto[i].nome );
			}
		}
	}
			

}//gerado por gen.c
