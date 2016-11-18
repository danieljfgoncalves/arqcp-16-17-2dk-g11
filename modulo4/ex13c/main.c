/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "activate_bits.h"
#include "activate_invert_bits.h"

/*
 * Module 4 - Exercise 13c
 */

int main(void) {
	
	//Example 1
	printf("EXAMPLE 1: a = 100\n");
	int a = 0x00000064, left = 23, right = 8;
	int activate_invert_result = activate_invert_bits(a, left, right);
	printf("Result : the number 0x%08x is 0x%08x if we activate all the bits left of position %d and right of position %d and then invert it.\n\n", a, activate_invert_result, left, right);
	
	//Example 2
	printf("EXAMPLE 2: a = -100\n");
	a = 0xFFFFFF9C; 
	left = 27;
	right = 4;
	activate_invert_result = activate_invert_bits(a, left, right);
	printf("Result : the number 0x%08x is 0x%08x if we activate all the bits left of position %d and right of position %d and then invert it.\n\n", a, activate_invert_result, left, right);
	
	//Example 3
	printf("EXAMPLE 3: a = 700000\n");
	a = 0x000AAE60; 
	left = 23; 
	right = 8;
	activate_invert_result = activate_invert_bits(a, left, right);
	printf("Result : the number 0x%08x is 0x%08x if we activate all the bits left of position %d and right of position %d and then invert it.\n\n", a, activate_invert_result, left, right);
	
	return 0;
}
