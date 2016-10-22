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
 * Module 2 - Exercise 12
 */
int main(void) {
	
	int area;
	
	length = 3;
	width = 4;
	area = get_area();
	printf("length: %u, width: %u and area %u\n", length, width, area);
	
	length = 10000;
	width = 150;
	area = get_area();
	printf("length: %u, width: %u and area %u\n", length, width, area);
	
	length = 1000;
	width = 2000;
	area = get_area();
	printf("length: %u, width: %u and area %u\n", length, width, area);
	
	length = 0x0000FFFF;
	width = 0x0000FFFF;
	area = get_area();
	printf("length: %u, width: %u and area %u\n", length, width, area);
	
	// The value will be wrong because the result will doesn't fit in 32-bits
	length = 0xFFFFFFFF;
	width = 0x2;
	area = get_area();
	printf("\nThe value will be wrong because the result doesn't fit in a 32-bits integer:\n");
	printf("length: %u, width: %u and area %u\n", length, width, area);
	printf("The result should be = 858993458\n");
	
	return 0;
}
