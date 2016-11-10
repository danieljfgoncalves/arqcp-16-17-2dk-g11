/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "greater.h"

/*
 * Module 4 - Exercise 3
 */

int main(void) {
	
	int a = 20, b = 5, c = 18;
	
	int greatest_num = greater(a, b, c);
	
	printf("The greatest number is %d.\n", greatest_num);
	
	return 0;
}
