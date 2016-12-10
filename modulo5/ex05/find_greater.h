/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * FIND_GREATER.H
 * 
 */

#ifndef FIND_GREATER_H
#define FIND_GREATER_H

typedef struct {
	int age;
	int number;
	int grades[10];
	char name[80];			
	char address[120];		
} Student;

/*
 * Checks which student grades ae greater than minimum value.
 * 
 * Student* s - student structure address
 * int minimum - minimum grade value
 * int* greater_grades - address of array where grades will be stored
 * 
 */
int find_greater(Student *s, int minimum, int *greater_grades);

#endif
