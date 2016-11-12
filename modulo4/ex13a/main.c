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
	printf("EXAMPLE 1:\na = 100 -> 00000000000000000000000001100100\nleft = 24\nright = 12\nExpected result = -16775169 -> 11111111 L 0000000000000 R 11111111111\n");
	int a = 100, left = 24, right = 12;
	int activate_result = activate_bits(a, left, right);
	printf("Result : the number %d is %d if we activate all the bits left of position %d and right of position %d.\n\n", a, activate_result, left, right);
	
	//Example 2
	printf("EXAMPLE 2:\na = 65636 -> 00000000000000000000000001100100\nleft = 24\nright = 12\nExpected result = -16709633 -> 11111111 L 0000000100000 R 11111111111\n");
	a = 65636; 
	left = 24;
	right = 12;
	activate_result = activate_bits(a, left, right);
	printf("Result: the number %d is %d if we activate all the bits left of position %d and right of position %d.\n\n", a, activate_result, left, right);
	
	//Example 3
	printf("EXAMPLE 3:\na = 1112129572 -> 01000010010010011100000000100100\nleft = 28\nright = 15\nExpected result = -230031361 -> 1111 L 0010010010011 R 111111111111111\n");
	a = 1112129572; 
	left = 28; 
	right = 15;
	activate_result = activate_bits(a, left, right);
	printf("Result: the number %d is %d if we activate all the bits left of position %d and right of position %d.\n\n", a, activate_result, left, right);
	
	return 0;
}
