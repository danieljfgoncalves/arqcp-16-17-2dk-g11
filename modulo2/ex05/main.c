/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
short num = 0, res = 0;

/*
 * Module 2 - Exercise 5
 */

int main(void) {
	
	printf("Insert a number: ");
	scanf("%hd",&num);
	
	res = swapBytes();
	
	printf("New value = %hd\n", res);
	
	return 0;
}
