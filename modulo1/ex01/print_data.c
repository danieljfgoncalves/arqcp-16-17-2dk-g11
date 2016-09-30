/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * print_data.c
 * 
 */
 
#include <stdio.h>

/*
 * Prints variable and pointer information to the screen.
 */
void print_data(int* x, int* xPtr, float* y, int* vec){
	
	printf("The value of x is: %d\nthe value of y is: %.f\n", *xPtr, *y);
	printf("The address (in Hexadecimal) of x is: %p\nThe address (in Hexadecimal) of xPtr is: %p\n", &x, xPtr);
	printf("The  value pointed by xPtr is: %d\n", *xPtr);
	printf("The address of vec is: %p\n", vec);
	printf("The values of vec[0], vec[1], vec[2] and vec[3] are: %d, %d, %d, %d\n", vec[0], vec[1], vec[2], vec[3]); /* method using arrays. Using pointer arithmetic it should be: *vec, *(vec+1), *(vec+2), *(vec+3) */
	printf("The addresses of vec[0], vec[1], vec[2] and vec[3] are: %p, %p, %p, %p\n", &vec[0], &vec[1], &vec[2], &vec[3]); /* could use vec, vec+1, vec+2, vec+3 instead */
	printf("\nb) The addresses of vec and vec[0] is the same, however, vec points to the beginning of the array, while vec[0] points to the first position of the array. The addresses of vec[1] and vec[2] are different because they point to the following positions of the array.\n");
	printf("\nc) If the program was run in different computers, the variables would have different addresses because memory space is dynamically allocated by each computer as needed.\n");
}
