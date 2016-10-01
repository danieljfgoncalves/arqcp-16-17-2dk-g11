/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * array_sort.c
 * 
 */
 
#include <stdio.h>

/*
 * Sorts an array of integers in ascending order.
 * 
 * int *vec - address of the integer array.
 * int n - size of the related array.
 */
void array_sort(int* vec, int n){
	
	int i;
	for(i = 0; i < n; i++) 
	{
		int j;
		for(j = i + 1; j < n; j++)
		{
			if(*(vec + i) > *(vec + j))
			{
				int temp = *(vec + i);
				*(vec + i) = *(vec + j);
				*(vec + j) = temp;
			}
		}
	}	
 }
