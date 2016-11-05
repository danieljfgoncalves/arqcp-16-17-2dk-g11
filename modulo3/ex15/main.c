/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "array_sort.h"
#include "check_smallest_number.h"
#include "print_vec.h"

int num = 10;
int vec[] = {10, 9, 6, 88, 7, 0, 1, 6, 27, 2};
int *ptrvec = vec;


/*
 * Module 3 - Exercise 15
 */

int main(void) {
	
	printf("Original array: \n");
	print_vec(vec, num);
	
	array_sort();
	
	printf("Sorted array: \n");
	print_vec(vec, num);	
	
	return 0;
}
