/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * increment_set.c
 * 
 */
 
#include <stdio.h>

/*
 * Increments the total number of sets.
 * 
 * int *ptr - address of integer to increment
 */
void increment_set(int *ptr){
	*ptr = *ptr + 1;
}  
