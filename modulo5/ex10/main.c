/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include <stdlib.h>
#include "create_matrix.h"
#include "search_matrix.h"

/*
 * Module 5 - Exercise 10
 */

int main(void) {

	int y = 5, k = 5, num;
	int** m = create_matrix(y, k);
	
	// Fill  & print matrix
	int i, j;
	for (i = 0; i < y; i++){
		for (j = 0; j < k; j++){
			m[i][j] = (i+1) * (j+1);
			printf("%d	", m[i][j]);
		}
		printf("\n");
	}
	
	// Search numbers
	// Ex. 1
	num = 5;
	printf("\nDoes %d exist in th matrix? %s\n", num, (search_matrix(m,y,k,num) == 1) ? "Yes" : "No");
	
	// Ex. 2
	num = 7;
	printf("\nDoes %d exist in th matrix? %s\n", num, (search_matrix(m,y,k,num) == 1) ? "Yes" : "No");
	
	
	// free memory when not used anymore [ manual garbage collector ;) ]
	for(i = 0 ; i < y ; i++)
	{
		free(m[i]); // frees array within matrix
	}
	// frees matrix
	free(m);
	
	return 0;
}
