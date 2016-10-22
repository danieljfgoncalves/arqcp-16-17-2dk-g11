/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

/*
 * Module 2 - Exercise 16
 */
int main(void) {
	
	int sum;
	
	a = 8;
	b = 2;
	n = 5;
	sum = summation();
	printf("a = %d, b = %d, n = %d -> result = %d\n", a, b, n, sum);
	
	a = 2;
	b = 2;
	n = 3;
	sum = summation();
	printf("\na = %d, b = %d, n = %d -> result = %d\n", a, b, n, sum);
	
	a = 34;
	b = 11;
	n = 45;
	sum = summation();
	printf("\na = %d, b = %d, n = %d -> result = %d\n", a, b, n, sum);
	
	return 0;
}
