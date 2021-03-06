/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * set_verif.c
 * 
 */
 
#include <stdio.h>

/*
 * Checks if a set of three consequent elements verify the condition Vi < Vi+1 < Vi+2.
 * 
 * int *first_pos - Address of first element to verify
 * 
 * return an int as a bool - 0 for false, 1 for true
 */
int set_verif(int *first_pos){
	return (*first_pos < *(first_pos + 1)) 
				? (*(first_pos + 1) < *(first_pos + 2)) 
					? 1 : 0 : 0;
}
