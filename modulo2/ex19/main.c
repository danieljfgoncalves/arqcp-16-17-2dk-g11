/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
short current_temp = 30, desired_temp = 22;
int result = 0;

/*
 * Module 2 - Exercise 19
 */

int main(void) {
	
	result = temp_change_time();
	printf("The time needed to reach desired temperature is: %d seconds\n", result);
	
	return 0;
}
