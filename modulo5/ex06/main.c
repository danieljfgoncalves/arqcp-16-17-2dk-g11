/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "s1.h"
#include "save_data.h"

#define SIZE 10

/*
 * Module 5 - Exercise 06
 */
int main(void) {
	
	// Define a s1 & a pointer to s1
	s1 s, *p = &s;

	// Populate s1's data 
	save_data(p, 1, 'a', 10, 'b');

	// Print s1's data
	printf("The s1's info is:\nI: %d\nC: %c\nJ: %d\nD: %c\n\n",
	s.i,
	s.c,
	s.j,
	s.d);

	return 0;
}
