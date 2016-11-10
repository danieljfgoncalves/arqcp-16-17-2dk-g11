/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "square.h"

/*
 * Module 4 - Exercise 1
 */

int main(void) {
	
	int x_square = 0, x = 5;
	
	x_square = square(x);
	
	printf("The square of %d is %d.\n", x, x_square);
	
	return 0;
}
