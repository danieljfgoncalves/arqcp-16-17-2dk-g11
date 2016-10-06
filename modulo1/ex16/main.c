/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 */

#include <stdio.h>
#include "where_exists.h"

/*
 * Module 1 - Exercise 16
 */
int main(int argc, char **argv)
{
	char str1[] = "software";
	char str2[] = "i want to be a software developer.";
	
	char *ptr = where_exists(str1, str2);
	
	printf("Does \"%s\" exist within \"%s\" ?\n", str1, str2);
	printf("%s", (ptr == NULL ? "No" : "Yes, "));
	if(ptr != NULL)
	{
		printf("at the address: %p", ptr);
	}
	
	printf("\n");
	return 0;
}

