/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "array_sort.h"

/*
 * Module 1 - Exercise 7
 */ 
int main(){
	
	int n;
	int i;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int vec[n];
	
	for(i = 0; i < n; i++){
		printf("Enter a number: ");
		scanf("%d", &vec[i]);
	}
		
	array_sort(vec, n);
	
	printf("Array sorted in ascending order: ");
	for(i = 0; i < n; i++){
		printf("%d  ", vec[i]);
	}
	printf("\n");
	
	return 0;
}
