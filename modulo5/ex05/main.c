/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "string.h"
#include "find_greater.h"

#define NUM_GRADES 10

/*
 * Module 5 - Exercise 5
 */

int main(void) {
	
	Student student;
	Student *s = &student;
	
	s->age = 26;
	s->number = 1150000;
	strcpy((char*)&(s->name), "Tiago");
	strcpy((char*)&(s->address), "Test address, 30");
	
	int *grades_ptr = (int *)&(s->grades);
	int grades[10] = {8, 8, 9, 10, 12, 16, 16, 16, 18, 20};
	int i;
	for(i = 0; i < 10; i++){
		*(grades_ptr+i) = grades[i];
	}
	
	
	int greater_grades[NUM_GRADES] = {0};
	int minimum = 9;

	int num_of_grades = find_greater(s, minimum, greater_grades);

	printf("The number of grades greater than %d is %d\n", minimum, num_of_grades);
	printf("greater_grades array: ");
	for (i = 0; i < num_of_grades; i++){
		printf("%d  ", greater_grades[i]);
	}
	printf("\n");
		
	return 0;
}
