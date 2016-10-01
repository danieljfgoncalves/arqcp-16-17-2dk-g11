/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * sort_without_reps.c
 * 
 */
 
#include <stdio.h>

/*
 * Fills an empty array in ascending order and without repeated values.
 * 
 * int *src - memory address of the received filled array
 * int n - size of src
 * int *dest - memory address of the received empty array
 * return n - number of positions in the final array
 * 
 */
 int sort_without_reps(int *src, int n, int *dest){
	
	int i;
	int j;
	
	/* Fills dest array with a copy of src */
	for(i = 0; i < n; i++){
		dest[i] = src[i];
	}

	/* Sorts dest array in ascending order without repeated values */
	int k;
	for(i = 0; i < n; i++){
		for(j = i + 1; j < n;){
			if(dest[i] == dest[j]){
				for(k = j; k < n; k++){
					dest[k] = dest[k+1];
				}
				n--;
			}
			else if(dest[i] > dest[j]){
				int temp = dest[i];
				dest[i] = dest[j];
				dest[j] = temp;
				j++;
			}
			else {
				j++;
			}
		}
	} return n;
}
 
	 
