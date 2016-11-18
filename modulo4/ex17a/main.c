/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "add_byte.h"
#include "print_vec.h"

#define SIZE 5

/*
 * Module 4 - Exercise 17a
 */

int main(void) {
	
	char x = 120;	
	int vec1[] = {0x00000004, 0x00000064, 0x00000087, 0x000000FA, 0x004C4B40}; // {4, 100, 135, 250, 5000000}	
	int vec2[SIZE] = {0};
		
	add_byte(x, vec1, vec2);
	
	printf("\nx = 0x%08x\n\n", x);
	printf("vec1 = ");
	print_vec(vec1, SIZE);
	printf("\n\n");
	
	printf("vec2 = ");
	print_vec(vec2, SIZE);
	printf("\n\n");
	
	return 0;
}
