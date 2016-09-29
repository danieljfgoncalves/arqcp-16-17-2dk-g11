/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */
 
#include <stdio.h>
#include "fill_vec.h"
#include "print_vec.h"

/*
 * Module 1 - Exercise 2
 */
int main(int argc, char **argv)
{
	
	int n = 20;
	int vec[n];
	
	fill_vec(vec, n);
	
	print_vec(vec, n);
	
	return 0;
}

