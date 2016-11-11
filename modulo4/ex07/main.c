/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "count_odd.h"

/*
 * Module 4 - Exercise 7
 */

int main(void) {
	
	int n = 10;
	int vec[] = {2, 5, 6, 20, -21, -84, 53, 27, 3, 3};
	
	int num_odd_numbers = count_odd(vec, n);
	
	printf("The array contains %d odd numbers\n", num_odd_numbers);
	
	return 0;
}
