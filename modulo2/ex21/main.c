/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "asm.h"
	
int code = 102, current_salary = 1600;
int new_salary = 0;

/*
 * Module 2 - Exercise 21
 */

int main(void) {
	
	new_salary = new_salary_calc();
	printf("The new calculated salary is: %d\n", new_salary);
	
	return 0;
}
