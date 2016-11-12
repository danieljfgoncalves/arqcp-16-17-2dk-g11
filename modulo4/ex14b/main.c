/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "join_bits.h"

/*
 * Module 4 - Exercise 14b
 */
int main(void) {
	
	// 1
	int a = 2;
	int b = 1;
	int pos = 1;
	int result = join_bits(a, b, pos);
	
	printf("\na: %d (0x%08x) b:%d (0x%08x) result: %d (0x%08x)\n", a, a, b, b, result, result);
	
	// 2
	a = -1;
	b = 8;
	pos = 3;
	result = join_bits(a, b, pos);
	
	printf("\na: %d (0x%08x) b:%d (0x%08x) result: %d (0x%08x)\n", a, a, b, b, result, result);
	
	// 3
	a = 1;
	b = ~0;
	pos = 30;
	result = join_bits(a, b, pos);
	
	printf("\na: %d (0x%08x) b:%d (0x%08x) result: %d (0x%08x)\n", a, a, b, b, result, result);
	
	return 0;
}
