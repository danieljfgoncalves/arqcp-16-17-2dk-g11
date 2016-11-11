/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "calc.h"

/*
 * Module 4 - Exercise 9
 */

int main(void) {
	
	printf("\nCalc:\nz=(*b)-a;\nc*z\n\n");
	
	//example 1
	printf("EXAMPLE 1:\na=2\nb=4\nc=3\n");
	int b = 4;
	int result = calc(2, &b, 3);
	printf("Result = %d\n\n", result);

	//example 2
	printf("EXAMPLE 2:\na=1\nb=2\nc=5\n");
	b = 2;
	result = calc(1, &b, 5);
	printf("Result = %d\n\n", result);
	
	//example 3
	printf("EXAMPLE 3:\na=5\nb=10\nc=5\n");
	b = 10;
	result = calc(5, &b, 5);
	printf("Result = %d\n\n", result);
	
	return 0;
}
