/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * CHANGE_ADDRESS.H
 * 
 */

#ifndef CHANGE_ADDRESS_H
#define CHANGE_ADDRESS_H

typedef struct {
	int age;
	int number;
	int grades[10];
	char name[80];			
	char address[120];		
} Student;

/*
 * Changes the address in the Student structure.
 * 
 * Student s* - address of the student structure
 * char* new_address - the address of the new_address
 * 
 */
void change_address(Student *s, char *new_address);

#endif
