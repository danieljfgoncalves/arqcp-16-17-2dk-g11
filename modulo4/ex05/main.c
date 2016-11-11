/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "dec_cube.h"

/*
 * Module 4 - Exercise 5
 */

int main(void) {
	
	int v1 = 10, v2 = 3;
	
	int v2_cube = dec_cube(&v1, v2);
	
	printf("v1 = %d\nThe cube of %d is %d\n", v1, v2, v2_cube);
	
	return 0;
}
