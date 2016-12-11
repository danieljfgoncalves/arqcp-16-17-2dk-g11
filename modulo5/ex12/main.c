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
#include "sum_matrixes.h"
#include "print_matrix.h"

/*
 * Module 5 - Exercise 12
 */

int main(void) {

	int y = 5, k = 5;
	int **a = create_matrix(y, k), **b = create_matrix(y, k);
	
	// Fill matrixes
	int i, j;
	for (i = 0; i < y; i++){
		for (j = 0; j < k; j++){
			a[i][j] = (i+1) * (j+1);
			b[i][j] = (i+1) * (j+1);
		}
	}
	
	// Sum matrixes
	int **sum_m = sum_matrixes(a,b,y,k);
	
	// Print matrixes
	printf("Matrix A:\n");
	print_matrix(a,y,k);
	printf("Matrix B:\n");
	print_matrix(b,y,k);
	printf("Matrix [A+B]:\n");
	print_matrix(sum_m,y,k);
	
	// free memory when not used anymore [ manual garbage collector ;) ]
	for(i = 0 ; i < y ; i++)
	{
		// frees array within matrixes
		free(a[i]);
		free(b[i]);
		free(sum_m[i]);  
	}
	// frees matrixes
	free(a);
	free(b);
	free(sum_m);
	
	return 0;
}
