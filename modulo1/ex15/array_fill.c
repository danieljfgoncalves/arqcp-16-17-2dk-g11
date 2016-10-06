/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * array_fill.c
 * 
 */
 
#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

/*
 * Fills an array with random numbers between 0 and 20.
 * 
 * *vec - address of array vec
 * size - size of array vec
 */
void array_fill(int *vec, int size){
	
	srand(time(NULL)); /* seeds the rand() function */
	int i;
	for(i = 0; i < size; i++){
		*(vec + i) = rand() % 20; /* rand() generates random numbers between 0 and 20 */
	}
	
	/* prints vec */
	for(i = 0; i < size; i++){
		printf("%d  ", *(vec + i));
	}
	printf("\n\n\n");
}
