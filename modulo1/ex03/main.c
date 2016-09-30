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
	
	int n;
	int i;
	
	printf("Please enter the number of elements: ");
	scanf("%d", &n);
	
	int numbers[n];
	
	for(i = 0; i < n; i++){
		printf("Please enter a number: ");
		scanf("%d", &numbers[i]);
	}
	
	even_number_printer(&n, numbers);

	return 0;
}
