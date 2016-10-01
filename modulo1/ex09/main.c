/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "sort_without_reps.h"

/*
 * Module 1 - Exercise 9
 */
int main(){
	
	int src[] = {5, 4, 6, 4, 1, 0, 0, 8, 10, 15, 16, 3, 3, 15, 100};
	int n = sizeof(src)/sizeof(int); /* gives the number of positions in src by dividing its size (in bytes) by the number of bytes used by an integer. */
	int dest[n];
	
	int i;
	
	printf("Original src array: "); /* only to compare to the final output */
	for(i = 0; i < n; i++){
		printf("%d ", src[i]);
	}
	printf("\n");
	
	int numberElements = sort_without_reps(src, n, dest);
	
	printf("Sorted dest array without repeated values: ");
	for(i = 0; i < numberElements; i++){
		printf("%d ", dest[i]);
	}
	printf("\n");

	return 0;
}

