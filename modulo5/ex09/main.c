/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include <stdlib.h>
#include "create_matrix.h"

/*
 * Module 5 - Exercise 9
 */

int main(void) {

	int y = 5;
	int k = 5;
	int i;
	int j;
	
	int** m_address = create_matrix(y, k);
	
	//print matrix
	printf("%d x %d MATRIX:\n", y, k);
	for (i = 0; i < y; i++){
		for (j = 0; j < k; j++){
			printf("%d	", m_address[i][j]);
		}
		printf("\n");
	}
	
	// free memory when not used anymore
	for(i = 0 ; i < y ; i++){
		free(m_address[i]); // frees array within matrix
	}

	// frees matrix
	free(m_address);
	
	return 0;
}
