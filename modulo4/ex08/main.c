/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "calculate.h"


void print_result(char op, int o1, int o2, int res)
{
	printf("%d %c %d = %d\n", o1, op, o2, res);
}

/*
 * Module 4 - Exercise 8
 */
int main(void) 
{
	// 1
	int result = calculate(1,2);
	printf("Result sum - product: %d\n\n", result);
	// 2
	result = calculate(2,2);
	printf("Result sum - product: %d\n\n", result);
	// 3
	result = calculate(3,2);
	printf("Result sum - product: %d\n", result);
	
	return 0;
}
