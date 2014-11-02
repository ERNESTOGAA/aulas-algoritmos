/*
 * 7. Faça um programa para ler o horário (hora, minuto e segundo) de início e a
 * duração, em segundos, de uma experiência biológica. O programa deve
 * informar o horário (hora, minuto e segundo) de termino da mesma.
 */

#include <stdio.h>

int main (){
	int htinicial, h, m, s, duracao, htfinal;
	int i, j , k;
	printf( "\tCálculo do tempo de experiência\n" );
	printf( "\tDigite o horário inicialno formato hh:mm:ss: " );
	scanf( "%d:%d:%d", &h, &m, &s );
	printf( "\tDigite quantos segundos durou a experiência: " );
	scanf( "%d", &duracao );

	htinicial = 0;
	htfinal = 0;
	htinicial += h * 3600;
	htinicial += m * 60;
	htinicial += s;
	
	htfinal = htinicial + duracao;
	
	if ( ( htfinal / 3600 ) > 0 )
		h = htfinal / 3600;
	if ( ( ( htfinal % 3600) / 60 ) > 0 )
		m = (htfinal % 3600) / 60;
	if ( ( ( htfinal % 3600 ) % 60) > 0 )
		s = ((htfinal % 3600) % 60);
	
	printf( "\tHorário Final: %02d:%02d:%02d \n", h, m, s );
	return 0;
}
