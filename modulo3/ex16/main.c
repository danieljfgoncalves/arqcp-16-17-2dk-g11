/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "exists.h"
#include "shift_array.h"
#include "sort.h"
#include "sort_without_reps.h"
#include "print_vec.h"

#define SIZE 10
#define SIZE2 6
#define SIZE3 20

int vec1[SIZE] = {1,6,5,2,2,3,10,10,4,8}; 
int *ptrsrc = vec1;

int x = 0;	// like exercise 14 used as "parameter" for methods
int *ptraux = vec1; // like exercise 14 used as "parameter" for methods
int num = SIZE;

int vec2[SIZE]; // expected output: {1, 2, 3, 4, 5, 6, 8, 10}
int *ptrdest = vec2;

/*
 * Module 3 - Exercise 16
 */
int main(void) {
	
	// 1
	
	printf("1:\narray to sort without reps:");
	print_int_vec(vec1, num);
	
	int changed = sort_without_reps();
	
	printf("\nresult array:");
	print_int_vec(vec2, changed);
	
	// 2
	num = SIZE2;
	int vec3[SIZE2] = {3, 76, 1, 3, 7, 2};
	ptrsrc = vec3;
	ptraux = vec3;
	int vec4[SIZE2];
	ptrdest = vec4;
	
	
	printf("\n2:\narray to sort without reps:");
	print_int_vec(vec3, num);
	
	changed = sort_without_reps();
	
	printf("\nresult array:");
	print_int_vec(vec4, changed);
	
	// 3
	
	num = SIZE3;
	int vec5[SIZE3] = {54,100,3,1,1,76,1,3,7,2,7,6,87,53,9,9,9,8,0,20};
	ptrsrc = vec5;
	ptraux = vec5;
	int vec6[SIZE3];
	ptrdest = vec6;
	
	
	printf("\n3:\narray to sort without reps:");
	print_int_vec(vec5, num);
	
	changed = sort_without_reps();
	
	printf("\nresult array:");
	print_int_vec(vec6, changed);
	
	return 0;
}
