/*
 *    20. As tarifas de certo parque de estacionamento são as seguintes:
 *        • 1° e 2° hora ­ R$ 1,00 cada
 *        • 3° e 4° hora ­ R$ 1,40 cada
 *        • 5° hora e seguintes ­ R$ 2,00 cada
 *    O número de horas a pagar é sempre inteiro e arredondado por excesso. Deste modo, quem estacionar
 *    durante 61 minutos pagará por duas horas, que é o mesmo que pagaria se tivesse permanecido 120 minutos.
 *    Os momentos de chegada ao parque e partida deste são apresentados na forma de pares de inteiros,
 *    representando horas e minutos. Por exemplo, o par 12 50 representará “dez para a uma da tarde”.
 *    Pretende­se um programa que, lidos pelo teclado os momentos de chegada e de partida, escreva na tela o
 *    preço cobrado pelo estacionamento. Deverá haver validação de dados. Admite­se que a chegada e a partida
 *    se dão com intervalo não superior a 24 horas (mas cujo controle de verificação não passa pelo programa aqui
 *    em causa). Portanto, se uma dada hora de chegada for superior à da partida, isso não é uma situação de erro,
 *    antes significará que a partida ocorreu no dia seguinte ao da chegada.
 */

#include <stdio.h>

int main(){
	int hchegada, mchegada, hsaida, msaida, htotal, mtotal, i;
	float valortotal = 0;
	
	printf("Digite o horário de entradade no formato hh mm : ");
	scanf("%d %d", &hchegada, &mchegada );
	printf("Difite o horário de saída no formato hh mm : ");
	scanf("%d %d", &hsaida, &msaida );
	
	if( hchegada == hsaida ){
		valortotal = 1.00;
	}
	else if( hchegada < hsaida ){
		htotal = hsaida - hchegada;
		mtotal = ( msaida - mchegada )/60;
		htotal += mtotal;
		for(i=0; i <= htotal; i++){
			if( i < 2 )
				valortotal += 1.00;
			if( (i > 2) && (i<=4) )
				valortotal += 1.40;
			if( i>=5 )
				valortotal += 2.00;
		}
	}
	else{
		htotal = (hsaida - hchegada) + 24;
		mtotal = (msaida - mchegada)/60;
		htotal += mtotal;
		for(i=0; i <= htotal; i++){
			if( i < 2 )
				valortotal += 1.00;
			if( (i > 2) && (i<=4) )
				valortotal += 1.40;
			if( i>=5 )
				valortotal += 2.00;
		}
	}

	printf("\t%d %d\n", htotal, mtotal);
	printf("O total a ser pago é de R$%.2f\n", valortotal);
	return 0;
}
