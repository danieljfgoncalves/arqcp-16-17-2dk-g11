/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */

#include <stdio.h>
#include "capitalize.h"

/*
 * Module 1 - Exercise 12
 */
int main(int argc, char **argv)
{
	
	char str[] = "i want to be a software developer.";
	
	printf("\nThe orginal sentence:\n%s\n", str);
	
	capitalize(str);
	
	printf("\nCapitalized sentence:\n%s\n\n", str);
	
	return 0;
}

