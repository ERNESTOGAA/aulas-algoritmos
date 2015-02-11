#include <stdio.h>
#include <string.h>

struct nomeGenerico{
	char marca[15];
	int ano;
	float preco;


};
void cadastrar( struct nomeGenerico *p ){
printf("marca[15] : ");
scanf("%s", p->marca );

printf("ano : ");
scanf("%d", &p->ano );

printf("preco : ");
scanf("%f", &p->preco );

};

void print( struct nomeGenerico *p ){
printf("marca :%s \n",p->marca);
printf("ano :%d \n",p->ano);
printf("preco :%f \n",p->preco);
}

int main(){
	struct nomeGenerico objeto[5];
	int i=0;
	for(; i<5; i++){
 		cadastrar( &objeto[i] );
	}

	float p=1;
	while(!p==0){
		scanf("%f", &p);
		i=0;
		for(;i<5;i++){
			if( objeto[i].preco < p ){
				print( &objeto[i] );
				printf("\n");
			}
		}
	}
		

}//gerado por gen.c
