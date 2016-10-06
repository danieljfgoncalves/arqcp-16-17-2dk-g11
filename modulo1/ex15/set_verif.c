/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * set_verif.c
 * 
 */
 
#include <stdio.h>

/*
 * Checks how many sets of three numbers verify the condition Vi < Vi+1 < Vi+2.
 * 
 * *vec - array to verify
 * size - size of given array
 */
void set_verif(int *vec, int size){
	int counter = 1;
	int number_sets = 0;
	int i;
	for(i = 0; i < size; i++){
		if(*(vec + i + 1) == *(vec + i) + 1){
			counter++;
			if(counter == 3){
				number_sets++;
				counter = 1; /* resets the counter */
			}
		} else {
			counter = 1;
		}
	}
	printf("Number sets: %d\n", number_sets);
}
