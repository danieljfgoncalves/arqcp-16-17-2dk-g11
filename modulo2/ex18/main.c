/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "asm.h"

unsigned int num = 0;

/*
 * Module 2 - Exercise 18
 */
int main(void) {
	
	num = 0;
	printf("\n%u! = %llu\n", num, factorial());
	
	num = 1;
	printf("\n%u! = %llu\n", num, factorial());
	
	num = 2;
	printf("\n%u! = %llu\n", num, factorial());
	
	num = 3;
	printf("\n%u! = %llu\n", num, factorial());
	
	num = 4;
	printf("\n%u! = %llu\n", num, factorial());
	
	num = 10;
	printf("\n%u! = %llu\n", num, factorial());
	
	num = 12;
	printf("\n%u! = %llu\n", num, factorial());
	
	// 13! and forward is not possible to calculate correctly on a 32-bit
	// architecture system, because we can't multiply 64-bit integers (only return)
	num = 13;
	printf("\n%u! = %llu (carry flag active before a multiplication)\n", num, factorial()); // this will return 0 
	
	return 0;
}
