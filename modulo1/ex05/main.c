/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */

#include <stdio.h>
#include "uppercase.h"

/*
 * Module 1 - Exercise 5
 */
int main(int argc, char **argv)
{
	
	char str[] = "Instituto Superior do Porto";
	
	printf("\nThe orginal string: %s\n", str);
	
	uppercase(str);
	
	printf("\nIn uppercase: %s\n\n", str);
	
	return 0;
}

