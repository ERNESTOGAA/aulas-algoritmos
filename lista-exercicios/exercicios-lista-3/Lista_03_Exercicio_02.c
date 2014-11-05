/*
 *    2. Faça um algoritmo utilizando o comando while (enquanto) que mostre uma contagem regressiva na tela,
 *    iniciando em 10 e terminando em 0. Mostrar uma mensagem “FIM!” após a contagem.
 */
#include <stdio.h>

int main(){
    int contagem = 10;
    
    while ( contagem >= 0 ){
	printf("\t%d\n", contagem );
	contagem--;
    }
    
    printf("\tFIM\n");

    return 0;
}


