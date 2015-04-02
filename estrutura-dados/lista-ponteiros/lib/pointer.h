#ifndef __POINTER_H__
	#define __POINTER_H__

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int* createVector( size_t n, int valor );

int* createRandomVector( int n );

void printIntVector( int* vector, size_t size );

int** createMatrix( size_t m, size_t n, int valor );

void printIntMatrix( int** matrix, size_t lines, size_t columns );

char* cloneString( char* string );

int stringCount( char* string );

char* cropString( char* string, size_t begin, size_t end );

char* subString( char* string, size_t index );

int compareInt( void* a, void* b );

int compareDouble( void* a, void* b );

int compareString( void* a, void* b );

int* joinVector( int* v1, size_t sizeV1, int* v2, size_t sizeV2 );

void splitVector( int* vector, int limit, int vectorSize );

void printString( char* string );

void copyString( char* dest, char* src );

int recursiveCount( char* string );

void recursiveCopy( char* dest, char* src );

#endif
