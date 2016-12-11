/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * stack_simulator.c
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack_simulator.h"

/*
 * Initiates the stack sim.
 */
void start_stack(Stack *s){
	s->stack_size = 0;
	s->values = (int*) malloc(0);
	if (s->values == NULL){
		printf("Allocating space was not possible!");
		exit(1);
	}
}

/*
 * Pushes a value to the stack.
 */
void push(Stack *s, int value){
	s->stack_size++;
	s->values = (int *) realloc(s->values, s->stack_size * sizeof(int));
	if (s->values == NULL){
		printf("Allocating space is not possible!");
		exit(1);
	}
	s->values[s->stack_size-1] = value;
}

/*
 * Pops a value from the stack.
 */
int pop(Stack *s){
	if (s->stack_size == 0){
		printf("Stack is empty!");
		return -1;
	}
	s->stack_size--;
	int value = s->values[s->stack_size];
	
	if (s->stack_size == 0){
		free(s->values);
		s->values = (int*) malloc(0);
		if (s->values == NULL){
			printf("Allocating space was not possible!");
			exit(1);
		}
	} else {
		s->values = (int *) realloc(s->values, s->stack_size * sizeof(int));
		if (s->values == NULL){
			printf("Allocating space was not possible!");
			exit(1);
		}
	}
	return value;
}

/*
 * Gives the current size of the stack (in bytes).
 * 
 * return int - the current size of the stack
 */
int stack_total_size(Stack *s){
	return s->stack_size * sizeof(int);
}

/*
 * Frees the stack from dynamic memory.
 */
void free_stack(Stack *s){
	s->stack_size = 0;
	free(s->values);
}
