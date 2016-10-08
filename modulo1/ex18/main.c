/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */

#include <stdio.h>
#include "compress_shorts.h"
#include "print_vec.h"
#include "read_short_array.h"

/*
 * Module 1 - Exercise 18
 */
int main(int argc, char **argv)
{
	int n_shorts;
	
	printf("How many elements in the array do you want?\n");
	scanf("%d", &n_shorts);
	
	short shorts[n_shorts];
	int n_ints = n_shorts / 2;
	int integers[n_ints];
	
	read_short_array(shorts, n_shorts);
	
	compress_shorts(shorts, n_shorts, integers);
	
	// Prints an integer array with short values (compressed)
	print_vec(integers, n_shorts);
	
	return 0;
}

