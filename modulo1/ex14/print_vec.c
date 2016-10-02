/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_vec.c
 */
 
#include <stdio.h>

/*
 * Function to print a vector with n number of integers.
 * int *vec - the vetor to print.
 * int n - the number of integers to print. 
 */
void print_vec(int *vec, int n) 
{
	printf("\n{ %d", *vec);
	
	int i = 1;
	while(i < n)
	{
		printf(", %d", *(vec + i));
		i++;
	}
	
	printf(" }\n");
}
