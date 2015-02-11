#include <stdio.h>
#include <ctype.h>

char * maiuscula( char *str ){
	str[0] = toupper( str[0] );
	return str;
}

int main(int c, char *qqrBosta[]){
	printf("%s", maiuscula( qqrBosta[1] ) );
}	
