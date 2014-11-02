/*
 *    12. Criar um algoritmo em C que a partir da idade e peso do paciente calcule a dosagem de determinado
 *    medicamento e imprima a receita informando quantas gotas do medicamento o paciente deve tomar por dose.
 *    Considere que o medicamento em questão possui 500 mg por ml, e que cada ml corresponde a 20 gotas.
 *       • Adultos ou adolescentes desde 12 anos, inclusive, se tiverem peso igual ou acima de 60
 *       quilos devem tomar 1000 mg; com peso abaixo de 60 quilos devem tomar 875 mg.
 *       • Para crianças e adolescentes abaixo de 12 anos a dosagem é calculada pelo peso corpóreo
 *       conforme a tabela a seguir:
 */
#include <stdio.h>

int main(){
	int idade;
	float peso, dosagem;
	
	printf("Digite a idade do paciente: ");
	scanf("%d", &idade );
	printf("Digite o peso do paciente: ");
	scanf("%f", &peso );

	if ( idade >= 12 ){
		if ( peso >= 60 )
			dosagem = ( 1000 / 500.0 ) * 20;
		else
			dosagem = ( 875 / 500.0 ) * 20;
	}
	else{
		if ( peso >= 5 && peso <= 9 )
			dosagem = ( 125 / 500.0 ) * 20;
		else if ( peso > 9 && peso <= 16 )
			dosagem = ( 250 / 500.0 ) * 20;
		else if ( peso > 16 && peso <= 24 )
			dosagem = ( 375 / 500.0 ) * 20;
		else if ( peso > 24 && peso <= 30 )
			dosagem = ( 500 / 500.0 ) * 20;
		else if ( peso > 30 )
			dosagem = ( 750 / 500.0 ) * 20;
	}

	printf("A quantidade de gotas por dose é de: %.0f\n", dosagem );
	return 0;


}
