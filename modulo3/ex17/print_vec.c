/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_vec.c
 * 
 */
 
 #include <stdio.h>
 
/*
 * Prints an array of integers.
 */
void print_vec(int *vec, int n){
	int i;
	for(i = 0; i < n; i++){
		printf("%d  ", vec[i]);
	}
	printf("\n");
}
