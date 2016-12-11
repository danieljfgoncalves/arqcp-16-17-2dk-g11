/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include <stdlib.h>
#include "create_str.h"

#define SIZE 80

/*
 * Module 5 - Exercise 06
 */
int main(void) {
	
	// Why it is possible to return such address?
	// Replied in create_str.c (line 38)
	
	char str[SIZE] = "I will be dynamically copied";
	printf("Old String: %s\n", str);
	
	char *new_str = create_str(str);
	printf("New String: %s\n", new_str);
	
	
	// free memory when not used anymore [ manual garbage collector ;) ]
	free(new_str);
	
	return 0;
}
