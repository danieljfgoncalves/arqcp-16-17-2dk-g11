/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "sub_greater.h"

/*
 * Module 4 - Exercise 4
 */
int main(void) {
	
	// 1
	int num1 = 4;
	int num2 = 10;
	
	int smaller = 0; // initiated
	
	int result = sub_greater(num1, num2, &smaller);
	
	printf("\n%d - %d = %d\nthe smallest is: %d\n", num1, num2, result, smaller);
	
	// 2
	num1 = 40;
	num2 = 10;

	result = sub_greater(num1, num2, &smaller);
	
	printf("\n%d - %d = %d\nthe smallest is: %d\n", num1, num2, result, smaller);
	
	return 0;
}
