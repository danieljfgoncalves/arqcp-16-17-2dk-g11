/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "save_data.h"

/*
 * Module 5 - Exercise 1
 */

int main(void) {
	
	Student s;
	Student *p = &s;
	
	int age = 25;
	int number = 1150000;
	char name[80] = "Pedro Santos";
	char address[120] = "Rua de teste, 30";

	save_data(p, age, number, name, address);
	
	printf("Age: %d\nNumber: %d\nName: %s\nAdress: %s\n", s.age, s.number, s.name, s.address);
	
	return 0;
}
