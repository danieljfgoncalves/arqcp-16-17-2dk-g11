/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "rotate_left.h"
#include "rotate_right.h"

/*
 * Module 4 - Exercise 11
 */

int main(void) {
	
	//Example 1 - positive numbers
	int number = 0xAA200FDF; //2854227935
	int nbits = 8;
	
	int result = rotate_right(number, nbits);
	printf("\nBefore rotation: 0x%08x\nAfter right rotation of %d bits: 0x%08x\n\n", number, nbits, result);
	
	result = rotate_left(number, nbits);
	printf("Before rotation: 0x%08x\nAfter left rotation of %d bits: 0x%08x\n\n", number, nbits, result);
	
	
	//Example 1 - negative numbers
	number = 0xFFD9DA60; //-2500000
	nbits = 8;
	
	result = rotate_right(number, nbits);
	printf("Before rotation: 0x%08x\nAfter right rotation of %d bits: 0x%08x\n\n", number, nbits, result);
	
	result = rotate_left(number, nbits);
	printf("Before rotation: 0x%08x\nAfter left rotation of %d bits: 0x%08x\n\n", number, nbits, result);
	
	return 0;
}
