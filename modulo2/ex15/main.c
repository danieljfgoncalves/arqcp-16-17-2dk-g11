/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
short op1 = 20, op2 = 5; //using short so we can guarantee that every result of any operation could be returned in a 32-bit variable

//max possible number = 32767

/*
 * Module 2 - Exercise 15
 */

int main(void) {
	
	//sum
	res = sum();
	printf("(sum) %d + %d = %d\n", op1, op2, res);
	
	//subtraction
	res = subtraction();
	printf("(subtraction) %d - %d = %d\n", op1, op2, res);
	
	//multiplication
	res = multiplication();
	printf("(multiplication) %d * %d = %d\n", op1, op2, res);
	
	//division
	res = division();
	printf("(division) %d / %d = %d\n", op1, op2, res);
	
	//modulus
	res = modulus();
	printf("(modulus) %d %% %d = %d\n", op1, op2, res);
	
	return 0;
}
