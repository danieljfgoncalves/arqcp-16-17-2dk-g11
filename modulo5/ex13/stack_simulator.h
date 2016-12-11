/*
 * Tiago Correia - 1151031@isep.ipp.pt
 * ARQCP - Turma 2DK
 * 
 * STACK_SIMULATOR.H
 * 
 */

typedef struct {
	int *values;
	int stack_size;
} Stack;

/*
 * Initiates the stack sim.
 * 
 */
void start_stack(Stack *s);

/*
 * Pushes a value to the stack.
 */
void push(Stack *s, int value);

/*
 * Pops a value from the stack.
 */
int pop(Stack *s);

/*
 * Gives the current size of the stack (in bytes).
 * 
 * return int - the current size of the stack
 */
int stack_total_size(Stack *s);

/*
 * Frees the stack from dynamic memory.
 */
void free_stack(Stack *s);
