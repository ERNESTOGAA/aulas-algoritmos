#include <stdio.h>

int main(){
	int i, *pi;
	float f, *pf;
	char c, *pc;
	
	pi = &i;
	pf = &f;
	pc = &c;
	
	printf("int: %d, float %f, char %c\n",i,f,c);
	printf("int = 1, float = 2.30, char =  'a'\n");
	*pi = 1; *pf = 2.3; *pc = 'a';
	printf("int: %d, float %f, char %c\n",i,f,c);
}
	
