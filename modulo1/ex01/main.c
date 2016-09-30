/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "print_data.h"

/*
 * Module 1 - Exercise 1
 */
int main(){
	
	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	print_data(&x, xPtr, &y, vec);
	
	return 0;
}

