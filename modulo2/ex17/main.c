/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
int b = 1, number = 10, fib_term = 0;

//max number is 47 (max fibonacci number that can be stored in an int)

/*
 * Module 2 - Exercise 17
 */

int main(void) {
	
	fib_term = fibonacci_term();
	printf("The number %d corresponds to the Fibonacci term %d.\n", number, fib_term);
	
	return 0;
}
