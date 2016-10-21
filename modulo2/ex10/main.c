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
 * Module 2 - Exercise 10
 */
int main(void) {
	
	// Tests header
	printf("Check if carry & overflow flags are active when we sum two 32-bit variables:\n");
	printf("0 = none active;\n");
	printf("1 = carry flag active;\n");
	printf("2 = overflow flag active;\n");
	printf("3 = both active;\n\n");
	
	int res = 0;
	
	// Test 1
	op1 = 0xFFFFFFFF;
	op2 = 0x1;
	res = sum();
	printf("Test 1: %d + %d - returns %d\n", op1, op2, res);
	
	// Test 2
	op1 = 0x80000000;
	op2 = 0x80000000;
	res = sum();
	printf("Test 2: %d + %d - returns %d\n", op1, op2, res);
	
	// Test 3
	op1 = 0x40000000;
	op2 = 0x40000000;
	res = sum();
	printf("Test 3: %d + %d - returns %d\n", op1, op2, res);
	
	// Test 4
	op1 = 0x1;
	op2 = 0x1;
	res = sum();
	printf("Test 4: %d + %d - returns %d\n", op1, op2, res);
	
	return 0;
}
