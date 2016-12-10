/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * save_data.c
 * 
 */
 
#include <stdio.h>
#include <string.h>
#include "save_data.h"

/*
 * Saves the age, number, name and address of a student in the fields of a Student structure.
 * 
 * Student *p - the address of the structure
 * int age - the age of the student
 * int number - the number of the student
 * char *name - the adress of the name
 * char *address - the address of the address of the student
 * 
 */
void save_data(Student *p, int age, int number, char *name, char *address){
	p->age = age;
	p->number = number;
	strcpy(p->name, name);
	strcpy(p->address, address);
};
