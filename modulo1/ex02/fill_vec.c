/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * fill_vec.c
 */
 
#include <stdio.h>

/*
 * Function to store a vector with n number of integers (read from keyboard).
 * int *vec - the vetor to fill.
 * int n - the number of integers to store. 
 */
void fill_vec(int *vec, int n) 
{
	int i = 0;
	while(i < n)
	{
		printf("Introduce the element at index number %d of the array\n", (i + 1));
		scanf("%d", (vec + i));
		i++;
	}
}
