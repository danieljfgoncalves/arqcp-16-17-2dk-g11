/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "sum_n.h"

/*
 * Module 4 - Exercise 2
 */
int main(void) {
	
	int n = 10;
	int sum = sum_n(n);
	
	printf("sums from 1 to %d\n\nsum = %d : 0x%x\n", n, sum, sum);
	
	// Expected : 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 = 55
	
	return 0;
}
