/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * save_data.h
 * 
 */
  
#include <stdio.h>
#include "student.h"
#include "save_data.h"

#define SIZE 5

/*
 * Module 5 - Exercise 02
 */
int main(void) {
	
	// Define students array & pointer to the array
	Student students[5], *s_ptr = students;
	
	// index
	int i = 0;

	// Populate student's data 
	save_data((s_ptr+i), 28, 1151452, "Daniel Goncalves", "Povoa de Varzim");
	save_data((s_ptr+(++i)), 32, 1151453, "John Doe", "North Pole");
	save_data((s_ptr+(++i)), 21, 1151454, "Jane Doe", "South Pole");
	save_data((s_ptr+(++i)), 27, 1151455, "Alex Payne", "Cape Verde");
	save_data((s_ptr+(++i)), 37, 1123232, "Maria Leal", "Neverland");
	
	// Print array
	for(i = 0; i < SIZE; i++)
	{
		// Print students data
		printf("The Student's info is:\nName: %s\nAge: %d\nAddress: %s\nNumber: %d\n\n",
		(s_ptr+i)->name,
		(s_ptr+i)->age,
		(s_ptr+i)->address,
		(s_ptr+i)->number);
	}
	return 0;
}
