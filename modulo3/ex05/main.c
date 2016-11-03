/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
#include "print_vec.h"

int num = 5;	
int numbers[] = {1, 50, 2, 5420, 8};
int *ptrvec = numbers;

/*
 * Module 3 - Exercise 5
 */

int main(void) {
	
	printf("Original array: ");
	print_vec(numbers, num);
	
	vec_inc();
	
	printf("Modified array: ");
	print_vec(numbers, num);
	
	return 0;
}
