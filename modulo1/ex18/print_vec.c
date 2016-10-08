/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_vec.c
 */
 
#include <stdio.h>

/*
 * Prints an integer array with n number of shorts.
 * int *vec - the vetor to print.
 * int n - the number of integers to print. 
 */
void print_vec(int *vec, int n) 
{
	short *ptr = (short *) vec;
	
	printf("\nThe elements of the vector are:\n{ %d", *ptr);
	
	int i = 1;
	while(i < n)
	{
		printf(", %d", *(ptr + i));
		i++;
	}
	
	printf(" }\n");
}
