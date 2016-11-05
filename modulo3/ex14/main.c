/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "exists.h"
#include "vec_diff.h"
#include "print_vec.h"

#define NUM 10

int num = NUM;

short int vec1[] = {2, 5465, 1, 1001, 11, 45, 1000, 999, 3500, 544}; 
short int *ptrvec1 = vec1;
short int *ptraux = vec1;

short int vec2[] = {20, 5465, 11, 1000, 121, 405, 100, 9, 3500, 544}; 
short int *ptrvec2 = vec2;

int vec3[NUM]; // expected output: {2, 1, 1001, 45, 999}
int *ptrvec3 = vec3;

/*
 * Module 3 - Exercise 14
 */
int main(void) {
	
	int changed_num = vec_diff();
	
	print_short_vec(vec1, num);
	
	print_short_vec(vec2, num);
	
	print_int_vec(vec3, changed_num);
	printf("Changed: %d\n", changed_num);
	
	return 0;
}
