#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[] ){
	int i=0;
	for(; i<argc; i++){
		printf("%s\n", *argv );
		argv++;
	}
}
