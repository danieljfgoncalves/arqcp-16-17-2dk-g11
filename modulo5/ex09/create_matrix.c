/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * create_matrix.c
 * 
 */
 
#include <stdio.h>
#include <stdlib.h>

/*
 * Reserves a memory block in the heap to hold a matrix Y x K.
 * 
 * int** - returns the address of the matrix
 * 
 */
int** create_matrix(int y, int k){
	
	int i;
	
	int** matrix = (int **) calloc(y, sizeof(int*));
	if(matrix == NULL){
		printf("Error at allocating space!\n");
		exit(0);
	}
	 
	for(i = 0; i < y; i++){
		matrix[i] = (int *) calloc(k, sizeof(int));
		if(matrix[i] == NULL){							
			printf("Error at allocating space for index %d\n", i);
			exit(0);
		}
	}
	return matrix;
	
}
