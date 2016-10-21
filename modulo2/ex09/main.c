/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
long op1 = 0, op2 = 0;
long long int res = 0;

/*
 * Module 2 - Exercise 9
 */

int main(void) {
	
	printf("Insert first number: ");
	scanf("%ld",&op1);
	
	printf("Insert second number: ");
	scanf("%ld",&op2);
	
	res = sum2ints();
	
	printf("Result = %lld\n", res);
	
	return 0;
}
