/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"

int num = 5;
long vec[] = {5, 8, 420, 62, 0};
long *ptrvec = vec;


/*
 * Module 3 - Exercise 11
 */

int main(void) {
	
	int result = vec_greater10();
	
	printf("The array contains %d elements that are equal or greater than 10.\n", result);
	
	return 0;
}
