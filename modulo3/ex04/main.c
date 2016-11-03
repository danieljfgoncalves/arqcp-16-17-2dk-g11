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
int vec[] = {300, 20, 1000, 1, 1}; 
int *ptrvec = vec;

/*
 * Module 3 - Exercise 4
 */
int main(void) {

	int result = vec_sum();
	
	printf("\nElements of vector: ");
	
	int i;
	for(i = 0; i < num; i++)
	{
		printf("%d, ", vec[i]);
	}
	
	printf("\nSum = %d\n", result);
	
	return 0;
}
