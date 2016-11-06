/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "is_seq.h"
#include "count_seq.h"
#include "print_vec.h"

#define SIZE1 5
#define SIZE2 10
#define SIZE3 20

int vec1[SIZE1] = {1,6,1,2,3}; 
int *ptrvec = vec1;

int a = 0;	// like exercise 14 used as "parameter" for methods
int b = 0;	// like exercise 14 used as "parameter" for methods
int c = 0;	// like exercise 14 used as "parameter" for methods
int num = SIZE1;

/*
 * Module 3 - Exercise 16
 */
int main(void) {
	
	// 1
	printf("1: array:");
	print_int_vec(vec1, num);
	
	int num_seq = count_seq(); // expected: 1
	
	printf("\nnumber of sequences: %d\n", num_seq);
	
	// 2
	int vec2[SIZE2] = {1,6,1,2,3,4,2,7,8,10}; 
	ptrvec = vec2;
	num = SIZE2;
	
	printf("2: array:");
	print_int_vec(vec2, num);
	
	num_seq = count_seq(); // expected: 4
	
	printf("number of sequences: %d\n\n", num_seq);
	
	// 3
	int vec3[SIZE3] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; 
	ptrvec = vec3;
	num = SIZE3;
	
	printf("2: array:");
	print_int_vec(vec3, num);
	
	num_seq = count_seq(); // expected: 18
	
	printf("number of sequences: %d\n\n", num_seq);
	
	return 0;
}
