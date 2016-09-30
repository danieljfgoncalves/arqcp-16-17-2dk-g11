/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * array_sort.c
 * 
 */
 
#include <stdio.h>

/*
 * Sorts an array of integers in ascending order.
 */
void array_sort(int* x, int y){
	
	int i;
	int j;
	
	for(i = 0; i < y; i++){
		for(j = i + 1; j < y; j++){
			if(x[i] > x[j]){
				int temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
 }
