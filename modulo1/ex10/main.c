/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "sum_even.h"
#include "print_vec.h"

/*
 * Module 1 - Exercise 10
 */ 
int main(){
	
	int n;
	
	printf("Enter the number of elements: ");
	scanf("%d", &n);
	
	int vec[n + 1];
	
	*vec = n; // Store number of elements of array.
	
	int i;
	for(i = 1; i <= n; i++){
		printf("Enter the element number %d: ", i);
		scanf("%d", (vec + i));
	}
	
	print_vec(vec, (*vec + 1));
	
	printf("\nThe sum of the even numbers is: %d\n", sum_even(vec));
	
	return 0;
}
