/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * set_increment.c
 * 
 */
 
#include <stdio.h>
#include "set_verif.h"

/*
 *
 */
int consecutive_sets(int *vec, int size){
	int counter = 0;
	int i;
	int test;
	for(i = 2; i < size; i++){
		
		test = set_verif(*(vec+i - 2), *(vec+i - 1), *(vec + i));
		
		counter += ((test == 1 ? 1 : 0));
	}
	return counter;
}  
