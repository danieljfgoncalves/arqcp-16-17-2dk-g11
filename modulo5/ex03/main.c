/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "string.h"
#include "change_address.h"

/*
 * Module 5 - Exercise 3
 */

int main(void) {
	
	Student student;
	Student *s = &student;
	
	s->age = 25;
	s->number = 1150000;
	strcpy(s->name, "Tiago");
	strcpy(s->address, "Test address, 30");
	
	printf("\nBefore address change:\n");
	printf("Age: %d\nNumber: %d\nName: %s\nAddress: %s\n", student.age, student.number, student.name, student.address);
	printf("\n");
	
	char new_address[120] = "New test address, 45";

	change_address(s, new_address);

	printf("After address change:\n");
	printf("Age: %d\nNumber: %d\nName: %s\nAddress: %s\n", student.age, student.number, student.name, student.address);
	
	return 0;
}
