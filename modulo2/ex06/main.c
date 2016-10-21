/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
short num = 0, res = 0;
char a = 0, b = 0;

/*
 * Module 2 - Exercise 6
 */

int main(void) {
	
	printf("Insert a number: ");
	scanf("%hd",&num);
	
	res = swapBytes();
	
	printf("New value = %hd\n", res);
	
	// exercise 6
	printf("Insert value of a: ");
	scanf("%hhd",&a);
	
	printf("Insert value of a: ");
	scanf("%hhd",&b);
	
	res = concatBytes();
	
	printf("Concat value = %hd\n", res);
	
	return 0;
}
