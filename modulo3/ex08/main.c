/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

int num = 5;
int vec[] = {2, 5465, 1, 1000, 11}; 
int *ptrvec = vec;

/*
 * Module 3 - Exercise 8
 */
int main(void) {

	int result = vec_sum_even();
	
	printf("\nElements of vector: ");
	
	int i;
	for(i = 0; i < num; i++)
	{
		printf("%d, ", vec[i]);
	}
	
	printf("\nSum Even = %d\n", result);
	
	return 0;
}
