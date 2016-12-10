/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
#include <stdio.h>
#include "student.h"
#include "save_data.h"
#include "save_grades.h"

#define SIZE 10
int new_grades[SIZE] = {20, 19, 18, 17, 16, 15, 14, 13, 12, 11};

/*
 * Module 5 - Exercise 04
 * Develop in Assembly the function void save_grades(Student *s, int *new_grades) that that copies all 
 * the elements of the array new_grades to the field grades of the structure pointed by s. Assume that 
 * the array new_grades has 10 elements.
 */
int main(void) {
	
	// Define a student & a pointer to student
	Student s, *s_ptr = &s;

	// Populate student's data 
	save_data(s_ptr, 28, 1151452, "Daniel Goncalves", "Povoa de Varzim");
	
	// Add grades
	save_grades(s_ptr, new_grades);

	// Print students data
	printf("The Student's info is:\nName: %s\nAge: %d\nAddress: %s\nNumber: %d\n\nGrades: [ %d",
	s_ptr->name,
	s_ptr->age,
	s_ptr->address,
	s_ptr->number,
	s_ptr->grades[0]);
	
	int i;
	for(i = 1; i < SIZE; i++)
	{
		printf(", %d", s_ptr->grades[i]);
	}
	printf(" ]\n\n");
	
	return 0;
}
