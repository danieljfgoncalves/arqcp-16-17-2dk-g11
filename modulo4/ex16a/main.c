/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "changes.h"

/*
 * Module 4 - Exercise 16a
 */
int main(void) {
	
	// 1
	int num = 0x00000900;
	printf("\nnumber: %d (0x%08x) ", num, num);
	changes(&num);
	printf("result: %d (0x%08x)\n", num, num);
	
	// 2
	num = 0x00000700;
	printf("\nnumber: %d (0x%08x) ", num, num);
	changes(&num);
	printf("result: %d (0x%08x)\n", num, num);
	
	// 2
	num = 0x00000800;
	printf("\nnumber: %d (0x%08x) ", num, num);
	changes(&num);
	printf("result: %d (0x%08x)\n", num, num);
	
	return 0;
}
