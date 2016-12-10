/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "count_even_matrix.h"
#include "create_matrix.h"

/*
 * Module 5 - Exercise 11
 */

int main(void) {

	int y = 3;
	int k = 3;
	int i;
	int j;
	
	int** m = create_matrix(y, k);
	
	m[0][0] = 1;
	m[0][1] = 4;
	m[0][2] = 2;
	m[1][0] = 5;
	m[1][1] = 2;
	m[1][2] = 1;
	m[2][0] = 6;
	m[2][1] = 5;
	m[2][2] = 2;
	
	
	//print matrix
	printf("%d x %d MATRIX:\n", y, k);
	for (i = 0; i < y; i++){
		for (j = 0; j < k; j++){
			printf("%d	", m[i][j]);
		}
		printf("\n");
	}
	
	int num_even_numbers = count_even_matrix(m, y, k);
	
	printf("The number of even numbers in the matrix is %d.\n", num_even_numbers);
	
	return 0;
}
