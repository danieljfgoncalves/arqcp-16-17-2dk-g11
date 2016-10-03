/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "swap.h"

/*
 * Module 1 - Exercise 17
 */
int main(){
	
	int size = 5;
	int vec1[] = {1, 3, 5, 7, 9};
	int vec2[] = {2, 4, 6, 8, 10};
	
	swap(vec1, vec2, size);
	
	/* prints content of vec1 after swap */
	int i;
	printf("vec1: ");
	for(i = 0; i < size; i++){
		printf("%d  ", *(vec1 + i));
	}
	printf("\n");
	
	/* prints content of vec1 after swap */
	printf("vec2: ");
	for(i = 0; i < size; i++){
		printf("%d  ", *(vec2 + i));
	}
	printf("\n");
	
	
	return 0;
}
