/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"

int num = 10;
long vec[] = {-5, -8, 6, -2, 0, 5, -500, 96, 20, -80000};
long *ptrvec = vec;


/*
 * Module 3 - Exercise 13
 */

int main(void) {
	
	printf("Original array: \n");
	print_vec(vec, num);
	
	vec_fill();
	
	printf("Negative numbers replaced by index: \n");
	print_vec(vec, num);	
	
	return 0;
}
