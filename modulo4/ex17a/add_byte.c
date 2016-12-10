/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * add_byte.c
 * 
 */
 
#include <stdio.h>

#define mask_sum(x, num)		(((0x000000FF & num) + x) & 0x000000FF) // isolates first byte of num (vec1[i]), then adds x to the mask without carry (OR) and then does the same for the num original value
#define mask(x, num)			mask_sum(x,num) | (0xFFFFFF00 & num)

/*
 *
 */
void add_byte(char x, int *vec1, int *vec2){
	int i;
	
	for(i = 0; i < vec1[0]+1; i++){
		vec2[i] = mask(x, vec1[i]);
	}
}
