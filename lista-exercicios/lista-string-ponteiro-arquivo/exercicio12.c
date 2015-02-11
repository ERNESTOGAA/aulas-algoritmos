#include <stdio.h>
#include <stdlib.h>

int fac( int *n ){
	int i= (*n)-1;
	
	for(; i>0; --i){
		(*n) *= i;
	}
return *n;
}

int main(int argc, char *argv[]){
	int a = atoi(argv[1] );
	printf("%d\n", fac( &a ) );
}
