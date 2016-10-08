/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * even_number_printer.c
 * 
 */
 
#include <stdio.h>

/*
 * Receives an array of integers and prints all its even numbers.
 */
 void even_number_printer(int size, int* array){
	 
	 int i;
	 
	 printf("The even numbers in the array are:\n");
	 
	 for(i = 0; i < size; i++){
		if(array[i] % 2 == 0){
			printf("%d\n", array[i]);
		}
	 }
 }
 
