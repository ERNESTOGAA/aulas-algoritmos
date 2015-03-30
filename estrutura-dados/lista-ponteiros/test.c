#include<stdio.h>
#include"./lib/pointer.h"

int main( int argc, char** argv )
{
		char s1[] = "hen";
		char s2[] = "henriqu";
	
		printf("%d\n", compareString( s1, s2 ));

		return 0;
}
