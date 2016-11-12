/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "sum_multiples_x.h"
#include "print_vec.h"

/*
 * Module 4 - Exercise 18a
 */
int main(void) {
	
	// 1
	char vec1[] = {2,1,4,3,4,3,1,5,7,0}; // Expected: sum = 10
	int x = 0x00000200;
	int sum = sum_multiples_x(vec1, x);
	print_char_vec(vec1);
	printf("x: %d (0x%08x) --> sum = %d\n", x, x, sum);
	
	// 2
	char vec2[] = {1,1,1,3,1,3,1,5,7,0}; // Expected: sum = 0
	x = 0x00000200;
	sum = sum_multiples_x(vec2, x);
	
	print_char_vec(vec2);
	printf("x: %d (0x%08x) --> sum = %d\n", x, x, sum);
	
	// 3
	char vec3[] = {6,1,1,3,1,3,1,5,9,0}; // Expected: sum = 21
	x = 0x00000300;
	sum = sum_multiples_x(vec3, x);
	
	print_char_vec(vec3);
	printf("x: %d (0x%08x) --> sum = %d\n", x, x, sum);
	
	return 0;
}
