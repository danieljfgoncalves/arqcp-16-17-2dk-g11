/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "array_fill.h"
#include "increment_set.h"
#include "set_verif.h"

/*
 * Module 1 - Exercise 15
 */
int main(){
	
	int size = 100;
	int vec[size];
	int num_sets = 0;
	
	array_fill(vec, size);
	
	/* prints vec */
	int i;
	for(i = 0; i < size; i++){
		printf("%d  ", *(vec + i));
	}
	printf("\n\n");
	
	int bool;
	for(i = 2; i < size; i++){
		
		bool = set_verif(vec + i - 2);
		
		if(bool == 1){
			increment_set(&num_sets);
		}
	}
	
	printf("Number of sets: %d\n", num_sets);
	
	return 0;
}
