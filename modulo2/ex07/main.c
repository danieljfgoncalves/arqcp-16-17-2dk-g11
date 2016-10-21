/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
short num = 0, num2 = 0, res = 0;
char a = 0, b = 0;


/*
 * Module 2 - Exercise 7
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
	
	//exercise 7
	printf("Insert first number: ");
	scanf("%hd",&num);
	
	printf("Insert second number: ");
	scanf("%hd",&num2);
	
	res = crossSumBytes();
	
	printf("Cross sum value = %hd\n", res);
	
	return 0;
}
