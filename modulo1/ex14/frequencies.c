/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * frequencies.c
 * 
 */
 
#include <stdio.h>

/*
 * Calculates the frequencies of grades (from 0.0 to 20.0).
 * 
 * float *grades - address of the an array with the grades.
 * int n - number of grades in array.
 * int *freq - address of array to store the frequencies.
 */
void frequencies(float *grades, int n, int *freq)
{
	int i;
	for(i = 0; i < n; i++)
	{
		int int_of_grade = (int) *(grades + i); // integer part of the grade.
		*(freq + int_of_grade) += 1;
	}
}
