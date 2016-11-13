/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "activate_bits.h"

/*
 * Module 4 - Exercise 13a
 */

int main(void) {
	
	//Example 1
	printf("EXAMPLE 1: a = 100\n");
	int a = 0x00000064, left = 24, right = 9;
	int activate_result = activate_bits(a, left, right);
	printf("Result : the number 0x%08x is 0x%08x if we activate all the bits left of position %d and right of position %d.\n\n", a, activate_result, left, right);
	
	//Example 2
	printf("EXAMPLE 2: a = -100\n");
	a = 0xFFFFFF9C; 
	left = 28;
	right = 5;
	activate_result = activate_bits(a, left, right);
	printf("Result : the number 0x%08x is 0x%08x if we activate all the bits left of position %d and right of position %d.\n\n", a, activate_result, left, right);
	
	//Example 3
	printf("EXAMPLE 3: a = 700000\n");
	a = 0x000AAE60; 
	left = 24; 
	right = 9;
	activate_result = activate_bits(a, left, right);
	printf("Result : the number 0x%08x is 0x%08x if we activate all the bits left of position %d and right of position %d.\n\n", a, activate_result, left, right);
	
	return 0;
}
