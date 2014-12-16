/* 
 * Faça um programa que leia uma matriz 3.x de inteiros, 
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
int main(int argc, char **argv)
{
	int v[SIZE][SIZE] = {0};
	int i, j;

	for (i = 0; i < SIZE; ++i)
	{
		for (j = 0; j < SIZE; ++j)
		{
		printf("v[%d][%d]-> %d\n", i, j, v[i][j]);	
		}
		
	}
	
	return 0;
}
