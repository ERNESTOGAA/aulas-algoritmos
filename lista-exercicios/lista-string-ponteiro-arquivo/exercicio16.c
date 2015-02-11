#include <stdio.h>
#include <string.h>

int isVogal( char *c ){
	char vogais[]={'a','e','i','o','u','A','E','I','O','U'};
	int i=0;
	for(; i<strlen( vogais ); i++){
		if( *c == vogais[i] ){
			return 1;
		}
	}
return 0;
}

int main( int argc, char *argv[] ){

	FILE *fp = fopen( argv[1] , "r+");

	char c = argv[2][0];
	char tmp='a';

	while( tmp != EOF ){
		tmp = fgetc( fp );
		printf("tmp: %c ",tmp);
		
		if( isVogal(&tmp) ){
		
			fseek(fp, ftell(fp)-1, SEEK_SET);
			fprintf(fp,"%c",c);
		}
	}
return 0;
}
