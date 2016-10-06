/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include <math.h>
#include "array_fill.h"
#include "consecutive_sets.h"

/*
 * Module 1 - Exercise 15
 */
int main(){
	
	int size = 100;
	int vec[size];
	int num_sets;
	
	array_fill(vec, size);
	
	/* prints vec */
	int i;
	for(i = 0; i < size; i++){
		printf("%d  ", *(vec + i));
	}
	printf("\n\n");
	
	num_sets = consecutive_sets(vec, size);
	
	printf("Number of sets: %d\n", num_sets);
	
	return 0;
}
