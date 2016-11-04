/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"
#include "print_vec.h"

int num = 10;
short int vec[] = {2, 5465, 1, 1001, 11, 45, 1000, 999, 3500, 544}; 
short int *ptrvec = vec;

/*
 * Module 3 - Exercise 12
 */
int main(void) {
	
	printf("\nFirst vector: ");
	print_short_vec(vec, num);
	
	int result = vec_zero();
	
	printf("\nChanged vector:");
	print_short_vec(vec, num);
	printf("\nChanged elements: %d", result);
	
	return 0;
}
