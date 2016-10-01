/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * sum_even.c
 * 
 */
 
#include <stdio.h>

/*
 * Sums the even elements of the array, excluding the first element 
 * (first element = size of array).
 * 
 * int *vec - address of the integer array.
 * 
 * return sum of the even elements.
 */
int sum_even(int* vec)
{
	int n = *vec; // number of elements stored in the array.
	
	int sum = 0;
	
	int i = 1;
	while(i <= n)
	{
		if (*(vec + i) % 2 == 0)
		{
			sum += *(vec + i);
		}
		i++;
	}
	return sum;
}
