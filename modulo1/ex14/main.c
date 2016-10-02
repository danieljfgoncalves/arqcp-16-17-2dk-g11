/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "frequencies.h"
#include "print_vec.h"

#define SIZE_FREQ 21 // 21 because there are 0 to 20 possible grades.

/*
 * Module 1 - Exercise 14
 */ 
int main(){
	
	int n;
	
	printf("Enter the number of grades: ");
	scanf("%d", &n);
	
	float grades[n];
	int freq[SIZE_FREQ] = {0}; 
	
	int i;
	for(i = 1; i <= n; i++){
		printf("Enter the %d%s grade: \n", i, (i == 1) ? "st" : (i == 2) ? "nd" : (i == 3) ? "rd" : "th");
		scanf("%f", (grades + (i - 1)));
	}
	frequencies(grades, n, freq);
	
	printf("\nThe frequencies of grades is:\n");
	
	print_vec(freq, SIZE_FREQ);
	
	return 0;
}
