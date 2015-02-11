#include <stdio.h>

int main(){

	int i=0;
	int el[5];
	for(;i<5; i++){
		scanf("%d",&el[i]);
	}

	i=0;
	for(; i<5; i++){
		printf("%d",(*el)*2 );
		(*el)++;
	}
}
