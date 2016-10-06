/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * swap.c
 * 
 */
 
#include <stdio.h>

/*
 * Receives the addresses of two arrays and swaps their content.
 * 
 * int *vec1 - address of first array
 * int *vec2 - address of second array
 * int size - size of given arrays
 * 
 */
void swap(int *vec1, int *vec2, int size){
	int temp;
	int i;
	for(i = 0; i < size; i++){
		temp = *(vec1 + i);
		*(vec1 + i) = *(vec2 + i);
		*(vec2 + i) = temp;
	}
}
