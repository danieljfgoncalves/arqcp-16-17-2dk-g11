/*
 * Daniel Goncalves > 1151452@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * sum_multiples_x.c
 * 
 */
/**
 * Sums all the element of vec that are multiples of the second byte of x.
 * 
 * char *vec - char vector.
 * int x - integer with multiple to check
 */
int sum_multiples_x(char *vec, int x)
{
	int sum = 0;
	
	char multiple = (x >> 8);
	
	while(*vec != 0)
	{
		if (*vec % multiple == 0)
		{
			sum += *vec;
		}
		vec++;
	}
	
	return sum;
}
