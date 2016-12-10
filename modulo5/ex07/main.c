/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "string.h"
#include "save_data.h"

#define SIZE 3

/*
 * Module 5 - Exercise 7
 */

int main(void) {
	
	s2 s2_s;
	s2 *s = &s2_s;

	short vw[SIZE] = {2, 4, 6};
	int vj = 10;
	char vc[] = "xyz";
	int i;
	
	save_data(s, vw, vj, vc);

	printf("Structure after save_data:\n");
	
	printf("w: ");
	for (i = 0; i < SIZE; i++){
		printf("%hd  ", s2_s.w[i]);
	}
	
	printf("\nj: %d\n", s2_s.j);
	
	printf("c: %s\n", s2_s.c);
	
	return 0;
}
