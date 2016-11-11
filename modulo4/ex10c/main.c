/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "print_vec.h"
#include "count_bits_zero.h"
#include "vec_count_bits_zero.h"

#define SIZE 4

/*
 * Module 4 - Exercise 10c
 */
int main(void) {
	
	// 1
	int vec[SIZE] = {-1, 2, 4, -3};
	int *ptr = vec;
	print_int_vec(vec, SIZE);
	
	int count = vec_count_bits_zero(ptr, SIZE);
	printf("\nhas %d inactive bits.\n", count);
	
	// 2
	int vec2[SIZE] = {2, 2, 2, 2};
	ptr = vec2;
	print_int_vec(vec2, SIZE);
	
	count = vec_count_bits_zero(ptr, SIZE);
	printf("\nhas %d inactive bits.\n", count);
	
	// 3
	int vec3[SIZE] = {-1, -1, 1, 1};
	ptr = vec3;
	print_int_vec(vec3, SIZE);
	
	count = vec_count_bits_zero(ptr, SIZE);
	printf("\nhas %d inactive bits.\n", count);
	
	// 4
	int vec4[SIZE] = {4, 4, 4, 4};
	ptr = vec4;
	print_int_vec(vec4, SIZE);
	
	count = vec_count_bits_zero(ptr, SIZE);
	printf("\nhas %d inactive bits.\n", count);
	
	return 0;
}
