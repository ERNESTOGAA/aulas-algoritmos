#include <stdio.h>
#include <string.h>

struct vetor{
	float x;
	float y;
	float z;
};

struct vetor soma( struct vetor *vetor1, struct vetor *vetor2){
	struct vetor retorno;
	retorno.x = vetor1->x + vetor2->x;
	retorno.y = vetor1->y + vetor2->y;
	retorno.z = vetor1->z + vetor2->z;
	return retorno;
}

int main(){

	struct vetor vetor1 = {1,2,3};
	struct vetor vetor2 = {-2,-4,2};

	struct vetor vetorr = soma( &vetor1, &vetor2 ); 

	printf("(%.2f,%.2f,%.2f)\n",vetorr.x, vetorr.y, vetorr.z);

} 
