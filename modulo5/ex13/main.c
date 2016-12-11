/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * main.c
 * 
 */
  
#include <stdio.h>
#include "stack_simulator.h"

/*
 * Module 5 - Exercise 13
 */

int main(void) {

	Stack s;
	Stack* ptr_s = &s;
	
	start_stack(ptr_s);
	
	int stack_size = stack_total_size(ptr_s);
	printf("Stack current size: %d bytes\n", stack_size);
	
	//push some values to the stack
	push(ptr_s, 2);
	push(ptr_s, 4);
	push(ptr_s, 65);
	push(ptr_s, 27);
	
	//stack size after pushes
	stack_size = stack_total_size(ptr_s);
	printf("Stack size after 4 pushes: %d bytes\n", stack_size);
	
	printf("pop value: %d\n", pop(ptr_s));
	printf("pop value: %d\n", pop(ptr_s));
	printf("pop value: %d\n", pop(ptr_s));
	printf("pop value: %d\n", pop(ptr_s));
	
	//stack size after pops
	stack_size = stack_total_size(ptr_s);
	printf("Stack size after 4 pops: %d bytes\n", stack_size);
	
	//test pop when stack is empty
	pop(ptr_s);
	printf("\n");
	
	return 0;
}
