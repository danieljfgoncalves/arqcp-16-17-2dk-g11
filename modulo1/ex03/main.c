/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "even_number_printer.h"

/*
 * Module 1 - Exercise 3
 */
int main(){
	
	int size; /* size of the array */
	int i;
	
	printf("Please enter the number of elements: ");
	scanf("%d", &size);
	
	int numbers[size];
	
	for(i = 0; i < size; i++){
		printf("Please enter a number: ");
		scanf("%d", &numbers[i]);
	}
	
	even_number_printer(size, numbers);

	return 0;
}
