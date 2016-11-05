/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "print_vec.h"
#include "frequencies.h"

#define SIZE 21 // 21 different grades (0 to 20)

int num = 10;
int grades[] = {15, 15, 15, 7, 7, 12, 10, 18, 20, 0};
int *ptrgrades = grades;

int freq[SIZE] = {0};
int *ptrfreq = freq;


/*
 * Module 3 - Exercise 17
 */

int main(void) {
	
	printf("Grades: \n");
	print_vec(grades, num);
	
	frequencies();
	
	printf("Grade absolute frequencies: \n");
	print_vec(freq, SIZE);	
	
	return 0;
}
