/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "join_bits.h"
#include "mixed_sum.h"

/*
 * Module 4 - Exercise 14c
 */
int main(void) {
	
	// 1
	int a = 2;
	int b = 1;
	int pos = 1;
	int result = mixed_sum(a, b, pos);
	
	printf("\na: %d (0x%08x) b:%d (0x%08x) result: %d (0x%08x)\n", a, a, b, b, result, result);
	
	// 2
	a = 0x0000FFFF;
	b = 0xFFFF0000;
	pos = 31;
	result = mixed_sum(a, b, pos);
	
	printf("\na: %d (0x%08x) b:%d (0x%08x) result: %d (0x%08x)\n", a, a, b, b, result, result);
	
	return 0;
}
