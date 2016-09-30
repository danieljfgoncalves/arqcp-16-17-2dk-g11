/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */

#include <stdio.h>
#include "power_ref.h"

/*
 * Module 1 - Exercise 6
 */
int main(int argc, char **argv)
{
	
	int x = 2;
	int y = 3;
	
	// First example
	printf("\nthe value of %d power %d is:\n", x, y);
	
	power_ref(&x, y);
	
	printf("%d\n\n", x);
	
	// Second example
	x = 54;
	y = 0;
	
	printf("\nthe value of %d power %d is:\n", x, y);
	
	power_ref(&x, y);
	
	printf("%d\n\n", x);
	
	// Third example
	x = 3;
	y = -3;
	
	printf("\nthe value of %d power %d is:\n", x, y);
	
	power_ref(&x, y);
	
	printf("%d\n\n", x);
	
	// Fourth example
	x = 1;
	y = -1;
	
	printf("\nthe value of %d power %d is:\n", x, y);
	
	power_ref(&x, y);
	
	printf("%d\n\n", x);
	
	return 0;
}

