/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "count_bits_zero.h"

/*
 * Module 4 - Exercise 10b
 */
int main(void) {
	
	// 1
	int num = -1;	
	int count = count_bits_zero(num);
	printf("\n%d has %d inactive bits.\n", num, count);
	
	// 2
	num = 2;	
	count = count_bits_zero(num);
	printf("\n%d has %d inactive bits.\n", num, count);
	
	// 3
	num = 4;	
	count = count_bits_zero(num);
	printf("\n%d has %d inactive bits.\n", num, count);
	
	// 4
	num = -3;	
	count = count_bits_zero(num);
	printf("\n%d has %d inactive bits.\n", num, count);
	
	return 0;
}
