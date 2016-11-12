/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "changes.h"
#include "changes_vec.h"
#include "print_vec.h"

#define SIZE 5

/*
 * Module 4 - Exercise 16c
 */
int main(void) {
	
	// 1
	int vec[SIZE] = {0x00000900, 0x00000700, 0x00000800, 0x00000f00, 0};
	int *ptrvec = vec;
	print_int_vec(ptrvec, SIZE);
	changes_vec(ptrvec, SIZE);
	printf("result:");
	print_int_vec(ptrvec, SIZE);
	
	return 0;
}
